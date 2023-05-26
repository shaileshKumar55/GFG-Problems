/*
While loop is another loop like for loop but unlike for loop it only checks for one condition.

Here, we will use while loop and print a number n's table in reverse order.

Example 1:

Input: n = 1
Output: 10 9 8 7 6 5 4 3 2 1
Example 2:

Input: n = 2
Output: 20 18 16 14 12 10 8 6 4 2
*/
******************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void printTable(int n)
    {
        int multiplier=10;
        while(multiplier)
        {
           //Your code here
           int res = multiplier * n;
           cout << res << " ";
           multiplier--;
        }
        
        cout<<endl;
    }  
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Solution obj;
	    obj.printTable(n);
	    
	}
	return 0;
}
// } Driver Code Ends
