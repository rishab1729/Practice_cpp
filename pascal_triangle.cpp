/*
Problem Statement 2: Given an integer N, return the first N rows of Pascal’s triangle.

Example 1:

Input Format: N = 5

Result:
	  1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Explanation: There are 5 rows in the output matrix. Each row corresponds to each one of the rows in the image shown above.

Example 2:

Input Format: N = 1

Result:
	1
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void insert_spaces(string s)
{
	for (int i = 0; i < s.size(); i++)
		cout << s[i] << " ";
}
int main()
{
	int n = 8; //input

	//Print first line
	for (int k = n-1; k >0; k--)
		cout << " ";
	cout <<1<<endl;

	//Print other n-1 lines
	for (int i = 1; i < n; i++)
	{
		for (int j = n - i-1; j > 0; j--)
			cout << " ";

		insert_spaces(to_string(int(pow(11, i))));
		cout << endl;
	}

}

