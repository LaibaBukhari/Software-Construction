#include <vector>
#include "MatrixLib"

std::vector<std::vector<int>> add(std::vector<std::vector<int>> m1, std::vector<std::vector<int>> m2){
	std::vector<std::vector<int>> m3(m1);
	for (int i{}; i < m1.size(); ++i){
		for (int j{}; j < m2.size(); ++j){
			m3[i][j] = (m1[i][j] + m2[i][j]);
		}
	}

	return m3;
}

std::vector<std::vector<int>> sub(std::vector<std::vector<int>> m1, std::vector<std::vector<int>> m2){
	std::vector<std::vector<int>> m3(m1);
	for (int i{}; i < m1.size(); ++i){
		for (int j{}; j < m2.size(); ++j){
			m3[i][j] = (m1[i][j] - m2[i][j]);
		}
	}

	return m3;
}

