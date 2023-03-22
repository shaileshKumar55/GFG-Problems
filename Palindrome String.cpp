/*
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome


Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
*/

*********************************************************************************************************************************************************


//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
int isPalindrome(string str1)
	{
	    string str2;
	    
	    for(char& ch: str1)
	    {
	        str2 = ch + str2;
	    }
	    
	    if(str1 == str2)
	    return 1;
	    
	    return 0;
	
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
