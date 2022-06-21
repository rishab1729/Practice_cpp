/*
Problem Statement 16: Given an array of N integers. Find the elements that appears more than N/3 times in the array. If no such element exists, return an empty vector.

Example 1:

Input: N = 5, array[] = {1,2,2,3,2}

Ouput: 2

Explanation: Here we can see that the Count(1) = 1, Count(2) = 3 and Count(3) = 1.Therefore, the count of 2 is greater than N/3 times. Hence, 2 is the answer.
Example 2:

Input:  N = 6, array[] = {11,33,33,11,33,11}

Output: 11 33

Explanation: Here we can see that the Count(11) = 3 and Count(33) = 3. Therefore, the count of both 11 and 33 is greater than N/3 times. Hence, 11 and 33 is the answer.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<int> v,int target)
{
    
    vector<int>::iterator it = find(v.begin(),v.end(),target);
    
    if(it!=v.end())
    {
        return true;
    }
    else
    {
        return false;
    }

}

void printVector(vector<int> v)
{
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main()
{
    vector <int> v1 ={11,33,33,11,33,11},v2;
    
    for(auto i: v1)
    {

        if(!isPresent(v2,i))
        {
            v2.push_back(i);
        }

    }
    
    
    for(auto j:v2){
        if (count(v1.begin(),v1.end(),j)>(v1.size()/3))
        {
            cout<<j<<" ";
        }
    }
    

    return 0;
}
