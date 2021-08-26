//find a fixed point (value equal to index) in a given array

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>res;
	    for(int i=1;i<=n;i++)
	    {
	        if(arr[i-1]==i)
	        res.push_back(arr[i-1]);
	    }
	    return res;
	}
};