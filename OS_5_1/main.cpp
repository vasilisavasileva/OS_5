#include<iostream>
#include"OS_5_DLL.h"
#include<Windows.h>

int main() {
	HMODULE HLIB = LoadLibrary("OS_5_DLL.dll");
	if (!HLIB) {
		std::cout << "error";
	}
	void (*CreateVector)(MyVector&, int);
	(FARPROC&)CreateVector = GetProcAddress(HLIB, "CreateVector");
	void (*PushBackToVector)(MyVector&, std::string);
	(FARPROC&)PushBackToVector = GetProcAddress(HLIB, "PushBackToVector");
	int (*VectorSize)(MyVector&);
	(FARPROC&)VectorSize = GetProcAddress(HLIB, "VectorSize");
	std::string (*GetElementInVector)(MyVector&, int );
	(FARPROC&)GetElementInVector = GetProcAddress(HLIB, "GetElementInVector");
	void (*PopBackInVector)(MyVector&);
	(FARPROC&)PopBackInVector = GetProcAddress(HLIB, "PopBackInVector");
	
	MyVector v;
	CreateVector(v, 5);
	for (int i = 0; i < 5; i++) {
		std::string l("i");
		PushBackToVector(v, l);
	}
	std::cout << GetElementInVector(v, 0);
	return 0;
	
}