#include "Stdafx.h"
#include "MatrixLib.h"

namespace MatrixLib{
	__declspec(dllexport) std::vector<std::vector<int>> matrixTranspose(std::vector<std::vector<int>> mat){
		if (mat.size() == 0)
			return std::vector<std::vector<int>>();

		std::vector<std::vector<int>> result(mat.size(), std::vector<int>(mat[0].size(), 0));
		for (int i = 0; i < mat.size(); i++)
		{
			for (int j = 0; j < mat[i].size(); j++)
			{
				result[i][j] = mat[j][i];
			}
		}
		return result;
	}
}