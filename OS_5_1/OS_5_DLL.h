#pragma once
#ifdef EXPORTING_DLL
#define OS_5_DLL_API __declspec(dllexport)
#else
#define OS_5_DLL_API __declspec(dllimport)
#endif

extern OS_5_DLL_API struct MyVector {
	std::string* Storage;//место где будут лежать элемент
	int Size; //кол-во элементом которые содержаться в векторе
	int Capacity; //размер хранилища
};


OS_5_DLL_API void CreateVector(MyVector& Vector, int Capacity);
OS_5_DLL_API void PushBackToVector(MyVector& Vector,std::string NewElement);
OS_5_DLL_API int VectorSize(MyVector& Vector);
OS_5_DLL_API std::string GetElementInVector(MyVector& Vector, int idx);
OS_5_DLL_API void PopBackInVector(MyVector& Vector);
