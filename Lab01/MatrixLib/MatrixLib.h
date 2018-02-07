// MatrixLib.h

#pragma once
#include <vector>

using namespace System;

namespace MatrixLib {
	std::vector<std::vector<int>> matrixTranspose(std::vector<std::vector<int>> mat);
	std::vector<std::vector<int>> matrixMultiply(std::vector<std::vector<int>> mat1, std::vector<std::vector<int>> mat2);

}
