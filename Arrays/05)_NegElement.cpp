//move all negative elements of an array to one side

#include <bits/stdc++.h>
using namespace std;

void neg(int a[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(i!=j)
            swap(a[i],a[j]);
        j++;
        }
    }
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	neg(a,n);
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}