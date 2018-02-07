// MatrixLib.h

#pragma once
#include <vector>


namespace MatrixLib {
	std::vector<std::vector<int>> matrixTranspose(std::vector<std::vector<int>> mat);
	std::vector<std::vector<int>> matrixMultiply(std::vector<std::vector<int>> mat1, std::vector<std::vector<int>> mat2);
	std::vector<std::vector<int>> sub(std::vector<std::vector<int>> m1, std::vector<std::vector<int>> m2);
	std::vector<std::vector<int>> add(std::vector<std::vector<int>> m1, std::vector<std::vector<int>> m2);
}
