/*
Example:

Input:
a = 6
b = 7
Output:1 1 0
Explanation:a && b = 1
a || b = 1
(!a) && (!b) = 0
*/

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void logicOp(int a, int b);


// } Driver Code Ends
//User function Template for C++


void logicOp(int a, int b)
{
    cout<<(a&&b)<<" "<<(a||b)<<" "<<((!a)&&(!b));
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    logicOp(a,b);
	    
	}
	return 0;
}
// } Driver Code Ends
