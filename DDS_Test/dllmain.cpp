#include <iostream>
#include <fstream>
#include <unordered_set>
#include <format>
#include <windows.h>
#include "pch.h"
#include "ScriptDisassembler.h"
//#include "utils/mem.h"
//#include "SDK.h"

static FILE* consoleFile;
static BOOLEAN kill;
static SDK::AbaseNPC_C* chosenNPC = nullptr;
static bool lightsEnabled = false;
static int loopCount = 0;

DWORD WINAPI InjectedThread(HANDLE hModule)
{
	kill = FALSE;
	if (AllocConsole())
		freopen_s(&consoleFile, "CONOUT$", "w", stdout);

	wprintf_s(L"Hooked\n");

	//1.1.0
	// Same as 1.0.8 it seems.
	uintptr_t* baseAddr = reinterpret_cast<uintptr_t*>(SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 0x2EE77A0 - 0x10, 0x2EE3460));



	SDK::AnpcAmy_C* amy = SDK::UObject::FindObjectReversed<SDK::AnpcAmy_C>();
	//amy->K2_SetActorRelativeLocation(SDK::FVector(6060.859375, -7291.560547, 172.1500092), false, true, nullptr);
	if (amy) {
		amy->K2_SetActorRelativeLocation({ 6060.859375f, -7291.560547f, 172.1500092f }, false, true, nullptr);
		wprintf_s(L"moved amy!\n");
	}
	else {
		wprintf_s(L"Error finding amy\n");
	}


	wprintf_s(L"Exiting...\n");
	Sleep(5000);

	if (consoleFile)
	{
		fclose(consoleFile);
		FreeConsole();
	}

	FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(hModule), 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		HANDLE hThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)InjectedThread, hModule, 0, nullptr);
		if (hThread)
			CloseHandle(hThread);
	}

	return TRUE;
}