/*
Given an array Arr of size N containing positive integers. Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.

Example 1:

Input:
N = 6
Arr[] = {5, 5, 10, 100, 10, 5}
Output: 110
Explanation: If you take indices 0, 3
and 5, then Arr[0]+Arr[3]+Arr[5] =
5+100+5 = 110.
 

Example 2:

Input:
N = 4
Arr[] = {3, 2, 7, 10}
Output: 13
Explanation: 3 and 10 forms a non
continuous  subsequence with maximum
sum.
*/

----------------------------------------------------------------------------------------------------------------------------------------------------
  
  //{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(vector<int>&arr, int n) {
	    // code here
	    int dp[] = new int[n+1];
        dp[0] = 0;
        dp[1] = arr[0];
        for(int i=2;i<n+1;++i) {
            //Include element
            int includeSum = arr[i-1] + dp[i-2];
            //Do not include element
            int doNotIncludeSum = dp[i-1];
            dp[i] = Math.max(includeSum, doNotIncludeSum);
        }
        return dp[n];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
