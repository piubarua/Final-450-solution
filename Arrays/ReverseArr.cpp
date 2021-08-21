#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    
  //Your code here
  int n=str.length();
    int start=0;
    int end=n-1;
    
    while(start<end){
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
//time complexity O(n)