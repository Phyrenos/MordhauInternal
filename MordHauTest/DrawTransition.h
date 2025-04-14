#pragma once
FVector2D WindowPos = { 200,200 };
FVector2D WindowSize = { 800,800 };
const FVector2D DefaultValue = { 500.0f, 650.0f };

void ApplyChams(UEngine* engine, SDK::USkeletalMeshComponent* mesh) {
	UC::TArray<SDK::UMaterialInterface*> Mats = mesh->GetMaterials();
	
	auto ApplyMaterialToAll = [&](SDK::UMaterialInterface* mat)
		{
			for (int t = 0; t < Mats.Num(); t++)
			{
				if (Mats[t])
				{
					mesh->SetMaterial(t, mat);
				}
			}
		};

	ApplyMaterialToAll(engine->WireframeMaterial);
}

AMordhauPlayerController* GetLocalPlayerController(UWorld* World)
{
	if (!World) return nullptr;

	if (AMordhauPlayerController* PlayerController = reinterpret_cast<AMordhauPlayerController*>(UGameplayStatics::GetPlayerController(World, 0)))
	{
		return PlayerController;
	}

	if (AMordhauPlayerController* PlayerController = reinterpret_cast<AMordhauPlayerController*>(UGameplayStatics::GetPlayerControllerFromID(World, 0)))
	{
		return PlayerController;
	}

	return nullptr;
}
float WorldDistance(const FVector& vector, const FVector& Target)
{
	return float(sqrtf(powf(vector.X - Target.X, 2.0) + powf(vector.Y - Target.Y, 2.0) + powf(vector.Z - Target.Z, 2.0)));
}

FVector TargetVelocity(AMordhauCharacter* Target) {
	if (Target->RootComponent)
		return Target->RootComponent->ComponentVelocity;
	return { 0.f,0.f,0.f };
}



float GetProjectileVelocity(AMordhauCharacter* localPlayer)
{
	if (localPlayer->LeftHandEquipment)
	{
		//auto wow = localPlayer->LeftHandEquipment->EquipmentName.ToString() //LeftHandEquipment->EquipmentName->text;
		std::string equipmentName = localPlayer->LeftHandEquipment->EquipmentName.ToString();

		if (equipmentName == "Longbow")
		{
			return 600;
		}
		else if (equipmentName == "Recurve Bow")
		{
			return 550;
		}
	}
	else if (localPlayer->RightHandEquipment)
	{
		std::string equipmentName = localPlayer->RightHandEquipment->EquipmentName.ToString();

		if (equipmentName == "Crossbow")
		{
			return 625;
		}
		else if (equipmentName == "Short Spear" || equipmentName == "Javelin" || equipmentName == "Partisan")
		{
			return 300;
		}
		else if (equipmentName == "Throwing Axe" || equipmentName == "Throwing Knife" || equipmentName == "Rock")
		{
			return 230;
		}
		else if (equipmentName == "War Axe" || equipmentName == "Maul")
		{
			return 125;
		}
	}

	return 225; // any other small throwable weapon
}

FVector PredictTargetPosition(AMordhauCharacter* Target, float ProjectileSpeed) {
	if (!Target ||  !Target->Mesh) {
		return FVector();
	}

	FVector TargetVelocity = Target->GetVelocity();
	FName BoneFName = UKismetStringLibrary::Conv_StringToName(SDK::FString(L"head"));
	if (!Target->Mesh->DoesSocketExist(BoneFName)) {
		return FVector();
	}

	FVector TargetPosition = Target->Mesh->GetSocketLocation(BoneFName);
	FVector ShooterPosition = Variables::CameraLocation;
		
	float distance = UKismetMathLibrary::Vector_Distance(ShooterPosition, TargetPosition);
	float timeToHit = distance / ProjectileSpeed;

	FVector PredictedPosition = TargetPosition + (TargetVelocity * timeToHit);
	return PredictedPosition;
}

bool CheckIfPlayer(AActor* Player, UClass* PlayerClass) {
	if (Player && PlayerClass) {
		if (Player->IsA(PlayerClass)) return true;
	}
	return false;
}

bool InRect(double Radius, SDK::FVector2D ScreenLocation)
{
	return 1920 / 2 >= (1920 / 2 - Radius) && 1920 / 2 <= (1920 / 2 + Radius) &&
		ScreenLocation.Y >= (ScreenLocation.Y - Radius) && ScreenLocation.Y <= (ScreenLocation.Y + Radius);
}
bool InCircle(double Radius, FVector2D ScreenLocation)
{
	if (InRect(Radius, ScreenLocation))
	{
		double dx = 1920 / 2 - ScreenLocation.X; dx *= dx;
		double dy = 1080 / 2 - ScreenLocation.Y; dy *= dy;
		return dx + dy <= Radius * Radius;
	} return false;
}

#undef min
#undef max

TMap<AMordhauProjectile*, TArray<FVector>> ProjectileTrajectories;
void __stdcall DrawTransition(UCanvas* Canvas)
{
	try {
		UEngine* engine = UEngine::GetEngine();
		if (!engine) return;
		UWorld* world = engine->GameViewport->World;
		if (!world) return;
		uintptr_t moduleBase = reinterpret_cast<uintptr_t>(GetModuleHandleA("Mordhau-Win64-Shipping.exe"));

		ULevel* PersistentLevel = world->PersistentLevel;
		if (!PersistentLevel) return;

		const auto GameInstance = world->OwningGameInstance;

		if (GameInstance == nullptr)
			return;

		const auto LocalPlayer = GameInstance->LocalPlayers[0];

		if (LocalPlayer == nullptr)
			return;

		const auto LocalPlayerController = LocalPlayer->PlayerController;

		if (LocalPlayerController == nullptr)
			return;

		const auto LocalActor = static_cast<AActor*>(LocalPlayerController->AcknowledgedPawn);

		if (LocalActor == nullptr)
			return;

		const auto LocalRootComp = LocalActor->RootComponent;

		if (LocalRootComp == nullptr)
			return;

		const auto LocalMordhauCharacter = static_cast<AMordhauCharacter*>(LocalActor);

		if (LocalMordhauCharacter == nullptr)
			return;

		Variables::LocalMordhauPlayer = LocalMordhauCharacter;

		const auto LocalMorhauPlayerState = static_cast<AMordhauPlayerState*>(LocalMordhauCharacter->PlayerState);

		if (LocalMorhauPlayerState == nullptr)
			return;

		APlayerCameraManager* PlayerCameraManager = UGameplayStatics::GetPlayerCameraManager(world, 0);
		if (!PlayerCameraManager) return;
		Variables::CameraLocation = PlayerCameraManager->GetCameraLocation();
		//LocalMordhauCharacter->bIsUnflinchable = true;
		
		if (Mods::Exploits::TEST3 && GetAsyncKeyState(Mods::KeyBinds::SuperSprint)) {	
			if (LocalMordhauCharacter) {
				LocalMordhauCharacter->StartSupersprint();
			}
		}
		

		if (Mods::Exploits::TEST4) {
			LocalMordhauCharacter->bAllowClimbing = true;
			LocalMordhauCharacter->bWantsClimb = true;
			LocalMordhauCharacter->RequestClimb(LocalMordhauCharacter->K2_GetActorLocation(), false);
		}

		Variables::font = engine->LargeFont;
		
		ZeroGUI::SetupCanvas(Canvas);
		ZeroGUI::Input::Handle();
		static bool menu_opened = false;
		if (GetAsyncKeyState(VK_INSERT) & 1) menu_opened = !menu_opened;
		
		if (ZeroGUI::Window("Mordhau Internal | Slotted", &WindowPos, WindowSize, menu_opened))
		{
			std::list<std::string> AimbotSelection = { "Aimbot", "Visuals","Keybinds" };
			static int current_section = 1;
			std::list<std::string> Exploits = { "Player","Equipment", "World","Keybinds" };
			static int Exploit_Selection = 1;
			//Simple Tabs
			static int tab = 0;
			static int active_section = 0;
			if (ZeroGUI::ButtonTab("Combat", FVector2D{ 110, 25 }, tab == 0)) tab = 0;
			if (ZeroGUI::ButtonTab("Visuals", FVector2D{ 110, 25 }, tab == 1)) tab = 1;
			if (ZeroGUI::ButtonTab("Exploits", FVector2D{ 110, 25 }, tab == 2)) tab = 2;
			if (ZeroGUI::ButtonTab("Settings", FVector2D{ 110, 25 }, tab == 3)) tab = 3;
			if (ZeroGUI::ButtonTab("Developer", FVector2D{ 110, 25 }, tab == 4)) tab = 4;
			ZeroGUI::NextColumn(130.0f);
			switch (tab)
			{
			case 0: // Combat
				

				ZeroGUI::SectionHeader(AimbotSelection, &current_section);

				switch (current_section)
				{
				case 0:
					ZeroGUI::PushNextElementY(10.0f);
					ZeroGUI::Checkbox("Aimbot", &Mods::Combat::Aimbot);
					if (Mods::Combat::Aimbot) {
						ZeroGUI::SliderInt("Fov", &Mods::Visuals::Fov, 1, 50);
						ZeroGUI::Checkbox("Prediction", &Mods::Combat::AimPrediction);
						ZeroGUI::SliderFloat("SpeedFactor", &Mods::Combat::Speed, 1.f, 199.f);
					}
					ZeroGUI::Checkbox("ParryBot", &Mods::Combat::AutoBlock);
					if (Mods::Combat::AutoBlock) {
						ZeroGUI::Checkbox("Projectiles", &Mods::Combat::Projectiles);
						ZeroGUI::SliderFloat("Distance", &Mods::Combat::Distance, 1, 4);
					}

					
					break;
				case 1:
					ZeroGUI::PushNextElementY(10.0f);
					ZeroGUI::Checkbox("Show FOV Circle", &Mods::Visuals::FovCircle);
					break;
				case 2:
					ZeroGUI::PushNextElementY(10.0f);
					ZeroGUI::Hotkey("Aimbot", FVector2D{ 80, 25 }, &Mods::KeyBinds::AimbotKey);
					break;

				}
				break;
			case 1: //Visuals
				ZeroGUI::Checkbox("Tracers", &Mods::Visuals::Tracers);
				if (Mods::Visuals::Tracers) {
					ZeroGUI::SliderInt("Thickness", &Mods::Visuals::TracerThinkness, 1, 10);
				}
				ZeroGUI::Checkbox("Box3D", &Mods::Visuals::Box3D);
				if (Mods::Visuals::Box3D) {
					ZeroGUI::Checkbox("Box Outline", &Mods::Visuals::Box3DOutline);
				}

				ZeroGUI::Checkbox("WireFrame Chams", &Mods::Visuals::wireframe);
				break;
			case 2: // Exploits

				ZeroGUI::SectionHeader(Exploits, &Exploit_Selection);

				switch (Exploit_Selection)
				{
					case 0: // Player
						ZeroGUI::PushNextElementY(10.0f);
						ZeroGUI::Checkbox("Equip AllPerks", &Mods::Exploits::EquipAllPerks);
						ZeroGUI::Checkbox("NoCrouchCooldown", &Mods::Exploits::NoCrouchCooldown);
						ZeroGUI::Checkbox("DisableTurnCap", &Mods::Exploits::DisableTurnCap);
						ZeroGUI::Checkbox("Increase LookLimit", &Mods::Exploits::LookLimit);
						ZeroGUI::Checkbox("Super Sprint", &Mods::Exploits::TEST3);
						break;
					case 1: // Equipment
						ZeroGUI::PushNextElementY(10.0f);
						ZeroGUI::Checkbox("Instant Throw", &Mods::Exploits::InstantThrow);
						ZeroGUI::Checkbox("Bow Modifier", &Mods::Exploits::TEST1);
						break;
					case 2: // World
						ZeroGUI::PushNextElementY(10.0f);
						ZeroGUI::Checkbox("Unlock All", &Mods::Exploits::UnlockAll);
						ZeroGUI::Checkbox("UEConsole", &Mods::Exploits::UEConsole);
						break;
					case 3: // Keybind
						ZeroGUI::PushNextElementY(10.0f);
						ZeroGUI::Hotkey("Super Sprint", FVector2D{ 80, 25 }, &Mods::KeyBinds::SuperSprint);
						break;
				}

				
		//		ZeroGUI::Checkbox("Try Climbing", &Mods::Exploits::TEST4);
				
				break;
			case 3: // Settings
				ZeroGUI::Checkbox("TeamCheck", &Mods::Settings::TeamCheck);
				ZeroGUI::Checkbox("SelfCheck", &Mods::Settings::LocalCheck);
				ZeroGUI::ColorPicker("Tracer Color", &Mods::Settings::TracerColor);
				ZeroGUI::ColorPicker("Box Color", &Mods::Settings::BoxColor);
				ZeroGUI::ColorPicker("Box Outline Color", &Mods::Settings::OutlineBoxColor);
				ZeroGUI::ColorPicker("FovCircle Color", &Mods::Settings::FOVColor);
				break;
			case 4: // DEVELOPER
				
				
				


				

				break;
			}

		}
		ZeroGUI::Render();
		ZeroGUI::Draw_Cursor(menu_opened);
		

		TArray<AActor*> ActorList = PersistentLevel->Actors;
		if (!ActorList.IsValid()) {
			return;
		}
		UClass* ClassToFind = AMordhauCharacter::StaticClass();
		if (!ClassToFind) {
			return;
		}

		UClass* ProjectileClass = AMordhauProjectile::StaticClass();
		if (!ClassToFind) {
			return;
		}

		double ClosestDistanceToCenter = DBL_MAX;
		AMordhauCharacter* TargetPlayerClosestToCenter = nullptr;

		FVector2D displaySize = FVector2D(1920, 1080);
		FVector2D screenCenter = FVector2D(displaySize.X / 2, displaySize.Y / 2);

		auto getfov = PlayerCameraManager->GetFOVAngle();
		Mods::Visuals::ActualFov = Mods::Visuals::Fov * displaySize.X / getfov / 2.0f;
		if (Mods::Visuals::FovCircle) {
			ZeroGUI::DrawCircle(FVector2D(1920 / 2, 1080 / 2), Mods::Visuals::ActualFov, 30, Mods::Settings::FOVColor);
		}


		static bool bHasUnlockedUEConsole = false;
		if (Mods::Exploits::UEConsole && !bHasUnlockedUEConsole && engine && engine->GameViewport && engine->GameViewport->ViewportConsole)
		{
			bHasUnlockedUEConsole = true;

			SDK::UObject* NewObject = UGameplayStatics::SpawnObject(engine->ConsoleClass, engine->GameViewport);
			engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
		}
		for (int i = 0; i < ActorList.Num(); i++) {
			if (!ActorList.IsValidIndex(i)) continue;
			AActor* actor = ActorList[i];
			if (!actor) continue;

		
			if (CheckIfPlayer(actor, ProjectileClass) && Mods::Combat::Projectiles) {
				AMordhauProjectile* Projectile = reinterpret_cast<AMordhauProjectile*>(actor);
				if (!Projectile) continue;

				float distance_from_me = WorldDistance(LocalRootComp->RelativeLocation, Projectile->K2_GetActorLocation()) / 100.f;
				if (distance_from_me <= Mods::Combat::Distance) {
					FRotator TargetRotation;
					TargetRotation = UKismetMathLibrary::FindLookAtRotation(PlayerCameraManager->GetCameraLocation(), Projectile->K2_GetActorLocation());
					LocalPlayerController->ClientSetRotation(TargetRotation, true);
					LocalMordhauCharacter->RequestParry(EBlockType::Regular, 1);
				}
			}

			if (CheckIfPlayer(actor, ClassToFind)) {
				AMordhauActor* MordActor = reinterpret_cast<AMordhauActor*>(actor);
				if (!MordActor) continue;
				AMordhauCharacter* Player = reinterpret_cast<AMordhauCharacter*>(actor);
				if (!Player) continue;

				AMordhauPlayerState* PlayerState = reinterpret_cast<AMordhauPlayerState*>(Player->PlayerState);
				if (!PlayerState) continue;

				auto ActorRoot = actor->RootComponent;
				if (!ActorRoot) continue;
				

				USkeletalMeshComponent* Mesh = Player->Mesh;
				if (!Mesh) continue;
				if (Mods::Settings::LocalCheck && actor == LocalPlayerController->Character) continue;
				if (Mods::Settings::TeamCheck && (Player->Team == LocalMordhauCharacter->Team)) continue;
				if(GetAsyncKeyState(VK_TAB)){
					LocalMordhauCharacter->bWantsClimb = true;
					LocalMordhauCharacter->TryClimbing();
					
				}

				if (Mods::Exploits::NoCrouchCooldown) {
					LocalMordhauCharacter->CrouchCooldown = 0;
					LocalMordhauCharacter->ClimbTargetLocation = Player->K2_GetActorLocation();
					LocalMordhauCharacter->RequestClimb(Player->K2_GetActorLocation(), false);
				}

				
				if (Mods::Combat::AutoBlock) {
					AMordhauEquipment* TargetWep = nullptr;
					if (Player->RightHandEquipment) {
						TargetWep = Player->RightHandEquipment;
					}
					else if (Player->LeftHandEquipment) {
						TargetWep = Player->LeftHandEquipment;
					}
					
					if (TargetWep) {
					
						float distance_from_me = WorldDistance(LocalRootComp->RelativeLocation, TargetWep->K2_GetActorLocation()) / 100.f;
						if (distance_from_me < Mods::Combat::Distance)
						{

							auto CurrentMotion = Player->Motion;

							if (!CurrentMotion) continue;

							if (CurrentMotion->IsA(UAttackMotion::StaticClass()))
							{


								FRotator TargetRotation;
								if (TargetWep != nullptr)
									TargetRotation = UKismetMathLibrary::FindLookAtRotation(PlayerCameraManager->GetCameraLocation(), TargetWep->K2_GetActorLocation());

								switch (static_cast<UAttackMotion*>(CurrentMotion)->Stage)
								{
								case EAttackStage::Release:
								{
									switch (static_cast<UAttackMotion*>(CurrentMotion)->Move)
									{

									case EAttackMove::Kick:
									{
										LocalPlayerController->ClientSetRotation(TargetRotation, false);
										LocalMordhauCharacter->RequestKick();
										break;
									}

									case EAttackMove::Stab:
									{
										LocalPlayerController->ClientSetRotation(TargetRotation, false);
										LocalMordhauCharacter->RequestAttack(EAttackMove::Stab, 10.f);
										break;
									}


									default:
									{

										LocalPlayerController->ClientSetRotation(TargetRotation, false);
										LocalMordhauCharacter->RequestParry(EBlockType::Regular, 1);
										break;
									}
									}
									break;
								}
								case EAttackStage::Recovery:
								{
									LocalPlayerController->ClientSetRotation(TargetRotation, false);
									LocalMordhauCharacter->RequestRightStab();
									break;
								}
								default:
									break;
								}
							}
						}
					}
				}

				FName HeadBoneName = UKismetStringLibrary::Conv_StringToName(SDK::FString(L"head"));
				if (!Mesh->DoesSocketExist(HeadBoneName)) continue;

				FVector TargetHead3D = Mesh->GetSocketLocation(HeadBoneName);
				SDK::FVector2D TargetHead2D;
				if (!LocalPlayerController->ProjectWorldLocationToScreen(TargetHead3D, &TargetHead2D, true)) continue;
				

				//Combat
				
				if (Mods::Exploits::DisableTurnCap) {
					LocalMordhauCharacter->TurnRateCapTarget = -1;
					LocalMordhauCharacter->LookUpRateCapTarget = -1;
				}

				if (Mods::Exploits::LookLimit)
				{
					LocalMordhauCharacter->LookUpLimit = 180;
					LocalMordhauCharacter->LookDownLimit = 180;
				}
				else
				{
					LocalMordhauCharacter->LookUpLimit = 55;
					LocalMordhauCharacter->LookDownLimit = 70;
				}

			

				if (Mods::Exploits::InstantThrow) {
					AMordhauEquipment* TargetWep = nullptr;
					if (LocalMordhauCharacter->RightHandEquipment) {
						TargetWep = LocalMordhauCharacter->RightHandEquipment;
					}
					else if (LocalMordhauCharacter->LeftHandEquipment) {
						TargetWep = LocalMordhauCharacter->LeftHandEquipment;
					}


					if (TargetWep != nullptr) {

						TargetWep->RangedDrawTime = 0;
						TargetWep->RangedCancelTime = 0;
						TargetWep->RangedReleaseTime = 0;
					}
				}

				if (Mods::Visuals::wireframe) {
					
					ApplyChams(engine, Player->CharacterMovement->CharacterOwner->Mesh);
				}

				if (Mods::Exploits::TEST1) {
					AMordhauEquipment* TargetWep = nullptr;
					if (LocalMordhauCharacter->RightHandEquipment) {
						TargetWep = LocalMordhauCharacter->RightHandEquipment;
					}
					else if (LocalMordhauCharacter->LeftHandEquipment) {
						TargetWep = LocalMordhauCharacter->LeftHandEquipment;
					}
					if (TargetWep) {
						std::string equipmentName = TargetWep->EquipmentName.ToString();
						if (equipmentName == "Longbow" || equipmentName == "Recurve Bow" || equipmentName == "Crossbow") {
							TargetWep->RangedReloadGrabAmmoNormTime = 0.1f;
							TargetWep->RangedReloadFinishReloadNormTime = 0.1f;
							TargetWep->ReloadMovementRestriction = EMovementRestriction::None;
							TargetWep->bIsLoaded = true;
							
							TargetWep->RangedDrawTime = 0.1f;
							TargetWep->RangedReleaseTime = 0.1f;
							TargetWep->RangedReloadTime = 0.1f;
							TargetWep->RangedDrawAnimation->SequenceLength = 0.1f; // 0.79 or 0.97 i forgot
							TargetWep->RangedDrawMovementRestriction = EMovementRestriction::None;
							TargetWep->RangedDrawFOVOffset = 90;
							TargetWep->RangedDrawEquipmentAnimation->SequenceLength = 0.1f;
							TargetWep->MaxHoldDrawTime = 999;
							TargetWep->RangedAirborneSway = FVector(0, 0, 0);
							TargetWep->RangedDrawSway = nullptr;
							TargetWep->RangedDrawSwayLoopSegment = FVector2D(0, 0);
						}
					}
				}

				if (Mods::Exploits::TEST2) {
					AMordhauEquipment* TargetWep = nullptr;
					if (LocalMordhauCharacter->RightHandEquipment) {
						TargetWep = LocalMordhauCharacter->RightHandEquipment;
					}
					else if (LocalMordhauCharacter->LeftHandEquipment) {
						TargetWep = LocalMordhauCharacter->LeftHandEquipment;
					}
					if (TargetWep) {
						TargetWep->MaxAmmo = 1337;

						TargetWep->Ammo = 1337;
						TargetWep->PreviousAmmo = 1337;
						TargetWep->LastReplicatedAmmo = 1337;
						TargetWep->SetAmmo(1337);

					}
				}
		

				if (Mods::Exploits::CanDodge) {
					LocalMordhauCharacter->bCanDodge = true;
					LocalMordhauCharacter->DodgeCooldown = Mods::Exploits::DodgeCooldown;
					LocalMordhauCharacter->DodgeDuration = Mods::Exploits::DodgeDuration;
					LocalMordhauCharacter->DodgeStaminaCost = 0;
				}




				// Visuals


				if (Mods::Visuals::Tracers) {
					FVector2D StartPos = FVector2D(displaySize.X / 2, 0);
					ZeroGUI::Draw_Line(StartPos, FVector2D(TargetHead2D.X, TargetHead2D.Y), Mods::Visuals::TracerThinkness, Mods::Settings::TracerColor);
				}



				//LocalMordhauCharacter->Stamina = 100;
				FVector Origin = Mesh->GetSocketLocation(UKismetStringLibrary::Conv_StringToName(SDK::FString(L"Hips")));
				FVector BoxExtent = FVector(50.0f, 50.0f, 100.0f);

				FVector Corners[8] = {
					Origin + FVector(-BoxExtent.X, -BoxExtent.Y, -BoxExtent.Z),
					Origin + FVector(BoxExtent.X, -BoxExtent.Y, -BoxExtent.Z),
					Origin + FVector(BoxExtent.X, BoxExtent.Y, -BoxExtent.Z),
					Origin + FVector(-BoxExtent.X, BoxExtent.Y, -BoxExtent.Z),
					Origin + FVector(-BoxExtent.X, -BoxExtent.Y, BoxExtent.Z),
					Origin + FVector(BoxExtent.X, -BoxExtent.Y, BoxExtent.Z),
					Origin + FVector(BoxExtent.X, BoxExtent.Y, BoxExtent.Z),
					Origin + FVector(-BoxExtent.X, BoxExtent.Y, BoxExtent.Z)
				};
				bool bOnScreen = false;
				SDK::FVector2D ScreenMin(std::numeric_limits<float>::max(), std::numeric_limits<float>::max());
				SDK::FVector2D ScreenMax(-std::numeric_limits<float>::max(), -std::numeric_limits<float>::max());
				std::vector<SDK::FVector2D> screenCorners(8);

				for (int j = 0; j < 8; j++) {
					if (LocalPlayerController->ProjectWorldLocationToScreen(Corners[j], &screenCorners[j], true)) {
						if (!bOnScreen) {
							ScreenMin = screenCorners[j];
							ScreenMax = screenCorners[j];
							bOnScreen = true;
						}
						else {
							ScreenMin.X = std::min(ScreenMin.X, screenCorners[j].X);
							ScreenMin.Y = std::min(ScreenMin.Y, screenCorners[j].Y);
							ScreenMax.X = std::max(ScreenMax.X, screenCorners[j].X);
							ScreenMax.Y = std::max(ScreenMax.Y, screenCorners[j].Y);
						}
					}
				}

				if (Mods::Visuals::Box3D) {
					std::vector<std::pair<int, int>> edges = {
						{0,1}, {1,2}, {2,3}, {3,0},
						{4,5}, {5,6}, {6,7}, {7,4},
						{0,4}, {1,5}, {2,6}, {3,7}
					};
					for (const auto& edge : edges) {
						FVector2D p1 = FVector2D(screenCorners[edge.first].X, screenCorners[edge.first].Y);
						FVector2D p2 = FVector2D(screenCorners[edge.second].X, screenCorners[edge.second].Y);
						if (Mods::Visuals::Box3DOutline) {
							ZeroGUI::Draw_Line(p1, p2, 3, Mods::Settings::OutlineBoxColor);
							//BackgroundList->AddLine(p1, p2, ImColor(0, 0, 0), 3.0f);
						}
						ZeroGUI::Draw_Line(p1, p2, 1, Mods::Settings::BoxColor);
					}
				}
				if (InCircle(Mods::Visuals::ActualFov, TargetHead2D))
				{
					double DistanceToCenter = UKismetMathLibrary::Vector_Distance2D(FVector(displaySize.X, displaySize.Y, 0), FVector(TargetHead2D.X, TargetHead2D.Y, 0));
					if (DistanceToCenter < ClosestDistanceToCenter)
					{
						ClosestDistanceToCenter = DistanceToCenter;
						TargetPlayerClosestToCenter = Player;
						Variables::Target = TargetPlayerClosestToCenter;
					}
				}


			}
		}
		// Aimbot

		if (Mods::Combat::Aimbot && GetAsyncKeyState(Mods::KeyBinds::AimbotKey)) {
			if (LocalMordhauCharacter && LocalMordhauCharacter->RootComponent && TargetPlayerClosestToCenter && TargetPlayerClosestToCenter->Mesh) {

				FName BoneFName = UKismetStringLibrary::Conv_StringToName(SDK::FString(L"head"));
				if (!TargetPlayerClosestToCenter->Mesh->DoesSocketExist(BoneFName)) {
					return;
				}

				FVector TargetBone3D = Mods::Combat::AimPrediction ?
					PredictTargetPosition(TargetPlayerClosestToCenter, GetProjectileVelocity(LocalMordhauCharacter)) :
					TargetPlayerClosestToCenter->Mesh->GetSocketLocation(BoneFName);
				FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(PlayerCameraManager->GetCameraLocation(), TargetBone3D);
				//LocalPlayerController->SetControlRotation(TargetRotation);
				
				
				/*FVector TargetBone3D = TargetPlayerClosestToCenter->Mesh->GetSocketLocation(BoneFName);
				auto EnemyVelocity = TargetVelocity(TargetPlayerClosestToCenter);
				auto bulletVelocity = GetProjectileVelocity(LocalMordhauCharacter);
				auto distToTarget = LocalMordhauCharacter->GetDistanceTo(TargetPlayerClosestToCenter);
				auto TimeToTravel = distToTarget / bulletVelocity;
				TargetBone3D += EnemyVelocity * TimeToTravel;
				FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(PlayerCameraManager->GetCameraLocation(), TargetBone3D);
				LocalPlayerController->SetControlRotation(TargetRotation);*/

				static std::vector<AActor*> lastProjectiles;
				std::vector<AActor*> currentProjectiles;
				AMordhauEquipment* TargetWep = nullptr;
				if (LocalMordhauCharacter->RightHandEquipment) {
					TargetWep = LocalMordhauCharacter->RightHandEquipment;
				}
				else if (LocalMordhauCharacter->LeftHandEquipment) {
					TargetWep = LocalMordhauCharacter->LeftHandEquipment;
				}
				if (TargetWep != nullptr) {
					SDK::TArray<SDK::AActor*> allActors;
					SDK::UGameplayStatics::GetAllActorsOfClass(world, AMordhauProjectile::StaticClass(), &allActors);
					for (int i = 0; i < allActors.Num(); i++) {
						AActor* actor = allActors[i];
						if (actor && actor->GetOwner() == TargetWep) {
							currentProjectiles.push_back(actor);
						}
					}

					for (auto projectile : currentProjectiles) {
						if (!projectile) continue;
						if (std::find(lastProjectiles.begin(), lastProjectiles.end(), projectile) == lastProjectiles.end()) {
							
							auto projectileMesh = reinterpret_cast<AMordhauProjectile*>(projectile);
							if (projectileMesh) {
								projectileMesh->ProjectileMovement->DragDeceleration = 0;
								projectileMesh->SpinComponent->RelativeLocation = TargetBone3D;
								projectileMesh->SpinComponent->RelativeRotation = FRotator(0, 0, 0);
								projectileMesh->LastProjectileLocation = TargetBone3D;
								projectileMesh->ProjectileMovement->MoveInterpolationTarget(TargetBone3D, FRotator(0, 0, 0));
							}

							/*std::cout << projectile->Name.ToString() << std::endl;
							projectile->K2_SetActorLocationAndRotation(TargetBone3D, SDK::FRotator(0, 0, 0), true, &hit, false);*/
						}
					}
				}
				lastProjectiles = currentProjectiles;
				
			}
		}
	}
	catch (const std::exception& e) {

	}
}
