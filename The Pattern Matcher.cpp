/*
All right! Let's implement some pattern-matching using CPP strings.

You are given a string s of x and y. You need to verify whether the string follows the pattern xnyn. That is the string is valid only if equal number of ys follow equal number of xs.
As an example: xxyyxxyy is valid. xy is valid. xxyyx is invalid. xxxyyyxxyyxy is valid.

Example 1:

Input:s = xxyyOutput:1
Example 2:

Input:s = xyxOutput:0
*/
**********************************************************************************************************************************
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       //Your code here
       int cx=0, cy=0;
       if(s[0]=='y' || s[s.size()-1]!='y'){
           cout<<0<<endl;
           return;
       }
       for(int i=0; i<s.size(); i++){
           if(s[i]=='x'){
               cx++;
           }
           if(s[i]=='y'){
               cy++;
               if(s[i+1]=='x' || i==s.size()-1){
                   if(cx!=cy){
                        cout<<0<<endl;
                        return;
                   }
                   cx=0;
                   cy=0;
               }
           }
       }
       cout<<1<<endl;
       return;
       
       cout<<endl;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}
// } Driver Code Ends
