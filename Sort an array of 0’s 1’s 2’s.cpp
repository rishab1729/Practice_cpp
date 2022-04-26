/*

Problem Statement 5: Given an array consisting of only 0s, 1s and 2s. Write a program to in-place sort
the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]

Input: nums = [0]
Input: nums = [0]

*/
#include <iostream>
#include <vector>

using namespace std;

void sort_array(vector<int> & numbers)
{
    int low =0,mid=0,high=numbers.size()-1;
    while (mid<high){
        
        switch(numbers[mid])
        {
            case 0: swap(numbers[low++],numbers[mid++]);
            break;
            
            case 1: mid++;
            break;
            
            case 2: swap(numbers[mid++],numbers[high--]);
            break;
        }
    }
}

int main()
{
   vector <int> numbers = {2,0,2,1,1,0};
   sort_array(numbers);
   for(auto i: numbers)
       cout<<i<<" ";
    return 0;
}
