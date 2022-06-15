/*
Problem Statement 11: You are given a read-only array of N integers with values also in the range [1,N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

Example 1:

Input Format:  array[] = {3,1,2,5,3}

Result: {3,4)

Explanation: A = 3 , B = 4 
Since 3 is appearing twice and 4 is missing
Example 2:

Input Format: array[] = {3,1,2,5,4,6,7,5}

Result: {5,8)

Explanation: A = 5 , B = 8 
Since 5 is appearing twice and 8 is missing
*/

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector <int> &v)
{
    for(auto i:v)
        cout<<i<<" ";
}

bool isNumberRepeated(vector <int> &v,int search_number)
{
    bool answer = false;
    
    for(auto i:v)
    {
        if(i==search_number)
        {
            answer = true;
        }
    }
    return answer;
}

int numberRepeated(vector <int> &v)
{
    int answer;
    for(auto i: v)
        if(isNumberRepeated(v,i))
        {
            answer = i;
        }
    return answer;
}

int missedNumber(vector <int> &v)
{
    int answer,c=1,i=0;
    vector<int> v2;
    
    for(i=1;i<=v.size();i++)
    {
        v2.push_back(i);
    }
    
    for(i=0;i<v.size();i++)
    {
        if (v[i]!=v2[i])
        {
            answer=c;
        }
        c++;
    }
    
    return answer;
}

int main()
{
    vector<int> a = {3,1,2,5,4,6,7,5};
    
    cout<<"Initial Array: ";
    printVector(a);
    
    cout<<"\nRepeated number is:"<<numberRepeated(a)<<endl;
    
    sort(a.begin(),a.end());
    
    cout<<"Array after sorting:";
    printVector(a);
    
    cout<<"\nMissed number is:"<<missedNumber(a);
    return 0;
}
