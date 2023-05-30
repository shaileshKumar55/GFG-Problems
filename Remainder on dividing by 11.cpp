/*
Given a big positive number x represented as string, find value of x % 11 or x mod 11. Output is expected as an integer.

Example 1:

Input: x = 1345
Output: 3
Explanation: 1345 % 11 = 3 
Example 1:

Input: x = 231456786543567898765
Output: 1
Explanation: 231456786543567898765 % 11 = 1
*/
*****************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
        int r=0;
       int n=x.size();
       for(int i=0;i<n;i++){
           r=(r*10+(x[i]-'0'))%11;
       }
       return r%11;
    
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
