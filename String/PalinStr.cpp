/*Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
 

Your Task:  
You don't need to read input or print anything. Complete the function isPlaindrome() which accepts string S and returns a boolean value


Expected Time Complexity: O(Length of S) 
Expected Auxiliary Space: O(1) 


Constraints:
1 <= Length of S <= 105*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int n=S.size();
	    int i=0;
	    int j=n-1;
	    while(i<j)
	    {
	        if(S[i]!=S[j])
	        return 0;
	        i++;
	        j--;
	    }
	    return 1;
	}

};