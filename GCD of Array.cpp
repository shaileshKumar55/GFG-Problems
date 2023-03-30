/*

Example 1:

Input: N = 3, arr[] = {2, 4, 6}
Output: 2
Explanation: GCD of 2,4,6 is 2.

Example 2:

Input: N = 1, arr[] = {1}
Output: 1
Explanation: Greatest common divisor of
all the numbers is 1.
*/



**********************************************************************************************************************************


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int gcd(int a,int b)
	{
	    if(b==0)
	    return a;
	    else return gcd(b,a%b);
	}
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	if(N==1)
    return arr[0];
    int g=gcd(arr[0],arr[1]);
    for(int i=2;i<N;i++)
    g=gcd(g,arr[i]);
    return g;
    }
};


//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}
// } Driver Code Ends
