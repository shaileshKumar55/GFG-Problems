/*
Given two numbers n and x, find out the total number of ways n can be expressed as the sum of the Xth power of unique natural numbers. As the total number of ways can be very large, so return the number of ways modulo 109 + 7. 

Example 1:

Input: 
n = 10, x = 2
Output: 
1 
Explanation: 
10 = 12 + 32, Hence total 1 possibility. 
Example 2:

Input: 
n = 100, x = 2
Output: 
3
Explanation: 
100 = 102 
62 + 82 and 12 + 32 + 42 + 52 + 72 
Hence total 3 possibilities. 
*/

*************************************************************************************************************************************************************

//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int numOfWays(int n, int x)
    {
        // code here
         vector<int> coins , first(n+1,0) , second(n+1,0) ;
        first[0] = 1;
        for(int i=1;pow(i,x)<=n;i++) coins.push_back(pow(i,x));
        for(int i=0;i<coins.size();i++){
            for(int j=0;j<=n;j++){
                second[j] = first[j];
                if(j>=coins[i]) second[j] = ((long long)second[j] + first[j-coins[i]])%((long long)1e9+7);
            } first = second;
        }
        return second[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends
