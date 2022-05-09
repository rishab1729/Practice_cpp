/*

Merge Overlapping Sub-intervals
Problem Statement 8: Given an array of intervals, merge all the overlapping intervals and return an array of non-overlapping intervals.

Examples

Example 1: 

Input: intervals=[[1,3],[2,6],[8,10],[15,18]]

Output: [[1,6],[8,10],[15,18]]

Explanation: Since intervals [1,3] and [2,6] are overlapping we can merge them to form [1,6]
 intervals.

Example 2:

Input: [[1,4],[4,5]]

Output: [[1,5]]

Explanation: Since intervals [1,3] and [2,6] are overlapping we can merge them to form [1,6] intervals.

*/

#include<bits/stdc++.h>

using namespace std;

void printVectorArray(vector<vector<int>> & arr)
{
    cout<<"{";
    for(auto i:arr)
    {
        cout<<"{"<<i[0]<<","<<i[1]<<"}";
        
        
        if (arr.back()[0]!=i[0] && arr.back()[1]!=i[1])
        {
        cout<<",";
        }
    }
    cout<<"}"<<"\n";
}

vector<vector<int>> merge(vector<vector<int>> & v)
{
    vector<vector<int>> ans;
    
    sort(v.begin(),v.end());
    
    for (int i=0;i<v.size();i++)
    {
        if (ans.empty() || ans.back()[1]<v[i][0])
        {
            ans.push_back({v[i][0],v[i][1]});
        }
        else
        {
            ans.back()[1] = max(ans.back()[1],v[i][1]);
        }
    }
    return ans;
}

int main() {
	vector<vector <int>> v = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector<vector<int>> ans = merge(v);
    
    cout<<"When Array is not merged :"<<endl;
    printVectorArray(v);
    
    cout<<"When array is merged :"<<endl;
    printVectorArray(ans);
    
	return 0;
}
