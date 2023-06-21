/*
You will be given an integer n, your task is to return the sum of all natural number less than or equal to n.

As the answer could be very large, return answer modulo 109+7.

Example 1:

Input:
n = 6
Output:
21
Explanation:
1+2+3+4+5+6 = 21
Example 2:

Input:
n = 4
Output:
10
Explanation:
1+2+3+4 = 10
*/

*********************************************************************************************************************************************


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
           long  ans=((long)n*(long)(n+1));
        ans/=2;
        return ans%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
