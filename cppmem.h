// cppmem by fallout (easy way to memory write in c++)

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void getPID(DWORD out, string windowName) {
	HWND window = FindWindow(NULL, &windowName);
	if (window == NULL) {
		cout << "Process ID finding failed. (could not find window)" << endl;
	}
	else {
		GetWindowThreadProcessId(window, &out);
	};
}

void WriteInt32(LPVOID address, INT32 value) {
	DWORD out;
	getPID(out);
	HANDLE handle = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, false, out);
	WriteProcessMemory(handle, address, &value, sizeof(value), 0);
}

void WriteInt64(LPVOID address, INT64 value) {
	DWORD out;
	getPID(out);
	HANDLE handle = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, false, out);
	WriteProcessMemory(handle, address, &value, sizeof(value), 0);
}

void WriteInt16(LPVOID address, INT16 value) {
	DWORD out;
	getPID(out);
	HANDLE handle = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, false, out);
	WriteProcessMemory(handle, address, &value, sizeof(value), 0);
}

void WriteBool(LPVOID address, boolean value) {
	DWORD out;
	getPID(out);
	HANDLE handle = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, false, out);
	WriteProcessMemory(handle, address, &value, sizeof(value), 0);
}

void WriteString(LPVOID address, string value) {
	DWORD out;
	getPID(out);
	HANDLE handle = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, false, out);
	WriteProcessMemory(handle, address, &value, sizeof(value), 0);
}
