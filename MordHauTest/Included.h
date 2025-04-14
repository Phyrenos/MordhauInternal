#pragma once


namespace Variables {
    
    AMordhauCharacter* Target;
	UFont* font;
	AMordhauCharacter* LocalMordhauPlayer;
    FVector CameraLocation = FVector();
    FVector OriginalLocation(0, 0, 0);
    FRotator OriginalRotation(0, 0, 0);
}
namespace Mods {
    namespace Settings {
        bool TeamCheck = true;
        bool LocalCheck = true;
        FLinearColor TracerColor{ 0.0f, 0.0f, 1.0f, 1.0f };
        FLinearColor BoxColor{ 0.0f, 0.0f, 1.0f, 1.0f };
        FLinearColor OutlineBoxColor{ 0.0f, 0.0f, 1.0f, 1.0f };
        FLinearColor FOVColor{ 0.0f, 0.0f, 1.0f, 1.0f };
    }

    namespace KeyBinds {
        static int SuperSprint = 0xA0;
        static int AimbotKey = 0xA2;
        static int ParryBotKey = 0xA2;
    }

    namespace Combat {
        bool AutoBlock = true;
        bool Aimbot = false;
        bool Projectiles = true;
        bool AimPrediction = false;


        float Distance = 0.3f;

        float Smoothing = 2;
        float Speed = 2;
    }

    namespace Visuals {
        bool FovCircle = true;
        int Fov = 8;
        int ActualFov = 0;

        bool skeleton;
        bool wireframe;


        bool Box3D = true;
        bool Box3DOutline = true;
        bool Tracers = false;
        int TracerThinkness = 1;
    }

    namespace Exploits {
        bool CanDodge = true;
        float DodgeDuration = 1;
        float DodgeCooldown = 1;
        bool DisableTurnCap = false;
        bool InstantThrow = false;
        bool LookLimit = false;

        bool EquipAllPerks = false;
        bool UnlockAll = true;

		bool NoCrouchCooldown = false;

        bool TEST1;
        bool TEST2;
        bool TEST3;
        bool TEST4;
        bool UEConsole;

        bool customtime = false;
        float customtimefloat = 0.01;
    }
}