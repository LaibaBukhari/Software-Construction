// MatrixLib.h

#pragma once

#ifdef MATHLIBRARY_EXPORTS  
#define MATHLIBRARY_API __declspec(dllexport)   
#else  
#define MATHLIBRARY_API __declspec(dllimport)   
#endif  


#include <vector>


namespace MatrixLib {
	__declspec(dllexport) std::vector<std::vector<int>> matrixTranspose(std::vector<std::vector<int>> mat);
	__declspec(dllexport) std::vector<std::vector<int>> matrixMultiply(std::vector<std::vector<int>> mat1, std::vector<std::vector<int>> mat2);
	__declspec(dllexport) std::vector<std::vector<int>> sub(std::vector<std::vector<int>> m1, std::vector<std::vector<int>> m2);
	__declspec(dllexport) std::vector<std::vector<int>> add(std::vector<std::vector<int>> m1, std::vector<std::vector<int>> m2);
}
