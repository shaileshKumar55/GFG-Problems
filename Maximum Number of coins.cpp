/*
Example 1:

Input: 
N=2
a[]={5, 10}
Output: 
60
Explanation: First Burst 5, Coins = 1*5*10
              Then burst 10, Coins+= 1*10*1
              Total = 60
              
              
Example 2:

Input:
N=4
a[] = {3,1,5,8}
Output:
167
Explanation:
nums = [3,1,5,8] --> [3,5,8] --> [3,8] --> [8] --> []
coins =  3*1*5    +   3*5*8   +  1*3*8  + 1*8*1 = 167.
*/
****************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    int maxCoins(int N, vector<int> &arr) {
        
        int n = arr.size();
        vector<vector<int>>dp(n+2, vector<int>(n+1, 0));
        arr.push_back(1);
        arr.insert(arr.begin(), 1);
        for(int i=n; i>= 1; i--){
            for(int j=1; j<=n; j++){
                if(i > j) 
                    continue;
                int maxi = INT_MIN;
                for(int k=i;k<=j;k++){
                    int ans = arr[i-1]*arr[k]*arr[j+1] + dp[i][k-1] + dp[k+1][j];
                    if(maxi < ans) 
                        maxi = ans;
                }  
                dp[i][j] = maxi;
            }
        }
        return dp[1][n];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends
