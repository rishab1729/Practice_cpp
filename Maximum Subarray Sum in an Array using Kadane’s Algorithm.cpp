/*
Problem Statement 3: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and return its sum and print the subarray.

Examples:

Example 1:

Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output: 6 

Explanation: [4,-1,2,1] has the largest sum = 6. 

Examples 2: 

Input: arr = [1] 

Output: 1 

Explanation: Array has only one element and which is giving positive sum of 1. 
*/

#include<iostream>
#include <vector>
using namespace std;

int max_sub_array(vector<int>& numbers)
{
    int sum = 0, max_number = -128;
    for (auto i : numbers)
    {
        sum += i;
        max_number = max(sum, max_number);
        if (sum < 0)
            sum = 0;
    }
    return max_number;
}

int main() {
    vector <int> numbers = { -2,1,-3,4,-1,2,1,-5,4 };
    cout << max_sub_array(numbers) << endl;
    return 0;
}
