/*

Merge two Sorted Arrays Without Extra Space
Problem statement 9: Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order. 
Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

Examples:

Example 1:

Input: 
n = 4, arr1[] = [1 4 8 10] 
m = 5, arr2[] = [2 3 9]

Output: 
arr1[] = [1 2 3 4]
arr2[] = [8 9 10]

Explanation:
After merging the two 
non-decreasing arrays, we get, 
1,2,3,4,8,9,10.

Example2:

Input: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]

Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]

Explanation:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.

*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> & v1,vector <int> & v2)
{
    int m = v1.size(), n = v2.size(), i = 0;
    vector <int> v3 = v1;
    
    for (auto i: v2)
        {v3.push_back(i);}
    
    sort(v3.begin(),v3.end());
    
    for (i=0;i<m;i++)
        {v1[i] = v3[i];}
        
    int j = 0;
    for (i=m;i<m+n;i++)
        {v2[j++] = v3[i];
        }
}

int main()
{
    vector <int> v1 = {1 ,3 ,5 ,7},v2 = {0 ,2 ,6 ,8 ,9};

    merge(v1,v2);
    
    cout << "Array 1:\n";
    for (auto i:v1)
        cout<<i<<" ";
    
    cout<<"\nArray 2:\n";
    for (auto i: v2)
        cout<<i<<" ";
        
    return 0;
}
