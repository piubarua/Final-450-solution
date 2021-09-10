#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s)
{
  int n=s.length();
  for(int i=0;i<n/2;i++)
  {
    char temp*=s[i];
    s[i]=s[n-1-i];
    s[n-1-i]=temp;
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

