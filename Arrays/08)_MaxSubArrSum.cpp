//find largest sum contiguous array

#include <bits/stdc++.h>
using namespace std;

int maxSubArrSum(int a[],int n){
    int maxSum=a[0];
    int curr=a[0];

    for(int i=1;i<n;i++)
    {
        curr=max(curr,a[i]+curr);
        maxSum=max(maxSum,curr);
    }
    return maxSum;
}