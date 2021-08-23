/*Write a function that reverses a string. The input string is given as an array of characters s.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.
 */



#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int start=0;
        int end=n-1;
        while(start<end){
            int temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
};