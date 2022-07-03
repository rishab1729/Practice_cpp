/*

Problem Statement 17: Given an array of N integers, your task is to find unique quads that add up to give a target value. In short, you need to return an array of all the unique quadruplets [arr[a], arr[b], arr[c], arr[d]] such that their sum is equal to a given target.

Pre-req: Binary Search and 2-sum problem

Note:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
arr[a] + arr[b] + arr[c] + arr[d] == target
Example 1:

Input Format: arr[] = [1,0,-1,0,-2,2], target = 0

Result: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Explanation: We have to find unique quadruplets from 
the array such that the sum of those elements is 
equal to the target sum given that is 0. 

The result obtained is such that the sum of the 
quadruplets yields 0.
Example 2:

Input Format: arr[] = [4,3,3,4,4,2,1,2,1,1], target = 9

Result: [[1,1,3,4],[1,2,2,4],[1,2,3,3]]

*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, long long target) {
         vector<vector<int> > res;
        
        if (num.empty())
            return res;
        int n = num.size(); 
        sort(num.begin(),num.end());
    
        for (int i = 0; i < n; i++) {
        
            long long target_3 = target - num[i];
        
            for (int j = i + 1; j < n; j++) {
            
                long long target_2 = target_3 - num[j];
            
                int front = j + 1;
                int back = n - 1;
            
                while(front < back) {
                
                    int two_sum = num[front] + num[back];
                
                    if (two_sum < target_2) front++;
                
                    else if (two_sum > target_2) back--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);
                    
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                }
                
                while(j + 1 < n && num[j + 1] == num[j]) ++j;
            }
        
            while (i + 1 < n && num[i + 1] == num[i]) ++i;
        
        }
    
        return res;
    }
};
