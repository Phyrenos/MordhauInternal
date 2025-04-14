#pragma once
#include "./CppSDK/SDK/Mordhau_classes.hpp"
using namespace SDK;


void virtual_hook(void* addr, void* pDes, int index, void** ret) {

	// We get the vtable of viewport client
	auto vtable = *(uintptr_t**)addr;

	// Now we loop through the vtable. 
	int methods = 0;
	do {
		++methods;
	} while (*(uintptr_t*)((uintptr_t)vtable + (methods * 0x8)));

	// We make our own copy of the vtable
	auto vtable_buf = new uint64_t[methods * 0x8];
	for (auto count = 0; count < methods; ++count) {
		vtable_buf[count] = *(uintptr_t*)((uintptr_t)vtable + (count * 0x8));

		*ret = (void*)vtable[index];

		// Now we switch the function in our own copy and then finally swapping the vtable with ours 
		vtable_buf[index] = (uintptr_t)(pDes);
		*(uint64_t**)addr = vtable_buf;
	}
}
using postrender_t = void(__thiscall*)(UObject*, UObject*);
postrender_t postrender_Original = nullptr;
void post_render_Hook(UObject* viewport_Client, UObject* canvas) {
	
	postrender_Original(viewport_Client, canvas);
}


int post_render_index = 0x62;

void Shitty() {
	UEngine* engine = UEngine::GetEngine();
	if (!engine) return;
	UWorld* world = engine->GameViewport->World;
	if (!world) return;

	//auto game_instance = world->OwningGameInstance;
	//
	//
	////virtual_hook((void*)viewport_client,post_render_Hook,post_render_index, (void**)&postrender_Original);
	//
	//virtual_hook((void*)engine->GameViewport, post_render_Hook, post_render_index, (void**)&postrender_Original);




}