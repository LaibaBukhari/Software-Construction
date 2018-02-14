#include <iostream>
#include <vector>
#include "MatrixLib.h"
#pragma comment(lib, "MatrixLib.lib")

using namespace std;

int main(){
	int option=0;
	vector<vector<int>> mat1 = { { 3, 4, 5 }, { 6, 7, 8 }, { 9, 10, 11 } }, mat2 = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }, result;
	
	while (option != 5)
	{
		cout << "Choose operation:\n1: Add\n2: Subtract\n3: Transpose\n4: Multiply\n5: Quit\n";
		cin >> option;
		//if (option == 1 || option == 2 || option == 4){
		//	int rows1 = 0, cols1 = 0;
		//	int rows2 = 0, cols2 = 0;
		//	cout << "Input row and columns of matrix 1 seperated by a space (<rows> <columns>):\n";
		//	cin >> rows1 >> cols1;
		//	for (int i = 0; i < rows1; i++)
		//	{
		//		cout << "Row " << i + 1 << ":\n";
		//		mat1.push_back(vector<int>(cols1));
		//		for (int j = 0; j < cols1; j++)
		//		{
		//			cin >> mat1[i][j];
		//		}
		//	}
		//	cout << "Input row and columns of matrix 1 seperated by a space (<rows> <columns>):\n";
		//	cin >> rows2 >> cols2;
		//	for (int i = 0; i < rows2; i++)
		//	{
		//		cout << "Row " << i + 1 << ":\n";
		//		mat2.push_back(vector<int>(cols2));
		//		for (int j = 0; j < cols2; j++)
		//		{
		//			cin >> mat2[i][j];
		//		}
		//	}
		//}
		//else if (option == 3){
		//	int rows1 = 0, cols1 = 0;
		//	cout << "Input row and columns of the matrix seperated by a space (<rows> <columns>):\n";
		//	cin >> rows1 >> cols1;
		//	for (int i = 0; i < rows1; i++)
		//	{
		//		cout << "Row " << i + 1 << ":\n";
		//		mat1.push_back(vector<int>(cols1));
		//		for (int j = 0; j < cols1; j++)
		//		{
		//			cin >> mat1[i][j];
		//		}
		//	}
		//}

		switch (option){
		case 1:
			result = MatrixLib::add(mat1, mat2);
			break;
		case 2:
			result = MatrixLib::sub(mat1, mat2);
			break;
		case 3:
			result = MatrixLib::matrixTranspose(mat1);
			break;
		case 4:
			result = MatrixLib::matrixMultiply(mat1, mat2);
			break;
		default:
			break;
		}
		if (result.size() != 0)
		{
			cout << "Result:\n";
			for (int i = 0; i < result.size(); i++)
			{
				for (int j = 0; j < result[i].size(); j++)
				{
					cout << result[i][j] << " ";
				}
				cout << endl;
			}
		}
		result.clear();
	}

	return 0;
}