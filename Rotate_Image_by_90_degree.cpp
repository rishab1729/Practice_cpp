/*

Rotate Image by 90 degree
Problem Statement 6: Given a matrix, your task is to rotate the matrix by 90 degrees.

Examples:

Example 1:

Input: [[1,2,3],[4,5,6],[7,8,9]]

Output: [[7,4,1],[8,5,2],[9,6,3]]

Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix.

Example 2:

Input: [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

Output:[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix

*/
#include <bits/stdc++.h>

using namespace std;

void rotate (vector <vector<int>> & v)
{
    int row = v.size(),i=0;
    
    for (i = 0;i<row;i++)
    {
        for(int j =0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    
    for (i=0;i<3;i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
}
int main()
{
    vector<vector <int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    
    rotate(v);
    
    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            cout<<v[k][l]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
