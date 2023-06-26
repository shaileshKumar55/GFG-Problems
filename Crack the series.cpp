/*
Given the series as follows 2 2 4 8 16 512....... Identify the Nth term of the series. Answers can be very large use BigInt in Java.

Example 1:

Input: N = 1
Output: 2 
Explanation: First term of the series is 2.
Example 2:

Input: N = 2
Output: 2
Explanation: Second term of the series is 2. 

*/

****************************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// User function Template for C++
class Solution {
  public:
    long double NthTerm(int N){
        // code here
          long double a[N];
        a[0] = a[1] = 2;
        for(int i=2;i<N;i+=2){
            a[i] = a[i-2]*a[i-2];
        }
        for(int i=3;i<N;i+=2){
            a[i] = a[i-2]*a[i-2]*a[i-2];
        }
        
        return a[N-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout<< fixed << setprecision(0)<<ob.NthTerm(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends
