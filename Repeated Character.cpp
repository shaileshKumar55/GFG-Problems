/*
Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.

Example 1:

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first. 


Example 2:

Input: 
S = "abcde"
Output: -1
Explanation: No repeating character present.
*/
**********************************************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
         int n= s.size();
      int i = 0;
      int j = i+1;
      while(i<n)
      {
          if(s[i]==s[j])
          {
              return s[i];
          }
          else if(s[i]!=s[j]){
              j++;
          }
          if(j>n)
          {
              i++;
              j=i+1;
          }
      }
      return '#';
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends
