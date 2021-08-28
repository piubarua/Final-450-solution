//find duplicate in an array of n+1 integers

#include <bits/stdc++.h>
using namespace std;

int dupInArr(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int index=abs(nums[i])-1;
        nums[index]*=-1;
        if(nums[index]>0)
        return abs(nums[i]);    
    }
    return -1;
}