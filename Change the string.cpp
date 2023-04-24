/*
Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.

Example 1:

Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.

‹Example 2:

Input: 
S = "Abcd"
Output: ABCD
Explanation: The first letter (A) is
uppercase. Hence, the complete string
is made uppercase.
*/

******************************************************************************************************************************************************


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
         int up = isupper(s[0]) ? 1 : 0;
        
        for(int i=0; i<s.size(); i++)
        if(up)
        s[i] = toupper(s[i]);
        else
        s[i] = tolower(s[i]);
        
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends
