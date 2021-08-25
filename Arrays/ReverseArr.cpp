#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s)
{
  int low=0;
  int high=s.size()-1;
  while(low<high){
    swap(s[low],s[high]);
    low++;
    high--;
  }
  return s;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<reverseStr(s)<<endl;
  }
  return 0;
}

