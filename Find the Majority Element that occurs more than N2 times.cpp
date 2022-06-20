/*
Problem Statement 13: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

Example 1:

Input Format: N = 3, nums[] = {3,2,3}

Result: 3

Explanation: When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 

Example 2:

Input Format:  N = 7, nums[] = {2,2,1,1,1,2,2}

Result: 2

Explanation: After counting the number of times each element appears and comparing it with half of array size, we get 2 as result.

Example 3:

Input Format:  N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}

Result: 4
*/

class Solution {
public:int majorityElement(vector<int>& nums){int c=0;int a=0;for(int num:nums){if(c==0){
a=num;}if(num==a) c+=1;else c-=1;}return a;}};
