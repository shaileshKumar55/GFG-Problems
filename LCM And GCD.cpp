/*
Given two numbers A and B. The task is to find out their LCM and GCD.

 

Example 1:


Input:
A = 5 , B = 10
Output:
10 5
Explanation:
LCM of 5 and 10 is 10, while
thier GCD is 5.
Example 2:

Input:
A = 14 , B = 8
Output:
56 2
Explanation:
LCM of 14 and 8 is 56, while
thier GCD is 2.
*/

----------------------------------------------------------------------------------------------------------------------------------------


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
   long long  gcd(long long a,long long b){
            if(a==0)
            return b;
            
            return gcd(b%a,a);
            
        }
        
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
          vector<long long>ans;
        
        long long  gc=gcd(A,B);
        
        long long lcm=(A/gc)*B;
        
        ans.push_back(lcm);
        ans.push_back(gc);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
