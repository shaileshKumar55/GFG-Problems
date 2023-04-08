/*
Given two integers N and K, the task is to count the number of ways to divide N into groups of positive integers. Such that each group shall have K elements and their sum is N. Also the number of elements in the groups follows a non-decreasing order (i.e. group[i] <= group[i+1]). Find the number of such groups

Example 1:

Input:
N = 8
K = 4
Output:
5
Explanation:
There are 5 groups such that their sum is 8 
and the number of positive integers in each 
group is 4. The 5 groups are [1, 1, 1, 5], 
[1, 1, 2, 4], [1, 1, 3, 3], [1, 2, 2, 3] and 
[2, 2, 2, 2].
Example 2:

Input: 
N = 4
K = 3
Output:
1
Explanation: 
The only possible grouping is {1, 1, 2}. Hence,
the answer is 1 in this case.
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countWaystoDivide(int N, int K) {
        vector<vector<int>> dp(N+1,vector<int>(K+1));
        for(int i=1;i<=N;i++){
            for(int j=1;j<=K;j++){
                if(i<j) dp[i][j]=0;
                else if(j==1) dp[i][j]=1;
                else dp[i][j]=dp[i-1][j-1] + dp[i-j][j];
            }
        }
        return dp[N][K];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends
