/**
Example 1:

Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 

Example 2:

Input: n = 2, r = 4
Output: 0
Explaination: r is greater than n.
*/

**********************************************************************************************************************************

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int mod=1e9 + 7;
    int nCr(int n, int r){
        // code here
          vector<vector<int>>dp(n+1,vector<int>(r+1,0));

        for(int i=0;i<=n;i++){

            dp[i][0]=1;

        }

        for(int i=0;i<=r;i++){

            dp[0][1]=0;

        }

        for(int i=1;i<=n;i++){

            for(int j=1;j<=r;j++){

                if(i==j)dp[i][j]=1;

                else if(i<j)dp[i][j]=0;

                else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;;

            }

        }

        return dp[n][r];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends
