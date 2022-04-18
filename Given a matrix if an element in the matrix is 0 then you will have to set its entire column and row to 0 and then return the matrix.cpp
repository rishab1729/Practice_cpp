/*

Problem Statement 1:
Given a matrix if an element in the matrix is 0 then you will have to set its entire column
and row to 0 and then return the matrix.

Examples:

Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

Example 2:
Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and
4th column will be set to 0

*/

//Function used

void print_vector(vector<vector<int>>& vector_)
{
	for (vector <int> rows : vector_)
	{
		for (int columns : rows)
			cout << columns;
		cout << endl;
	}
}


void add_zereos(int i, int j, int rows, int columns, vector<vector<int>>& matrix)
{
	vector<vector<int>> temp;

	for (int k = 0; k < rows; k++)
		matrix[k][j] = 0;

	for (int l = 0; l < columns; l++)
		matrix[i][l] = 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> matrix { {1, 1, 1, 0}, {1, 0, 1, 1}, {1, 1, 1, 1} };
	vector<vector<int>> location;
	int rows = matrix.size(), columns= matrix[0].size();

	cout << "Our array intially:\n";
	print_vector(matrix);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			//Finding position of zeroes in the matrix and storing in location vector
			if (matrix[i][j] == 0)   
				location.push_back({ i,j });
		}
	}

	for (int i = 0; i < location.size(); i++)
		add_zereos(location[i][0], location[i][1], rows, columns, matrix);

	cout << "\nArray after adding zeroes:\n";
	print_vector(matrix);

	return 0;
}
