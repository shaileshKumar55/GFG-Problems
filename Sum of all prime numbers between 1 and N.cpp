/*
Given a positive integer N, find the sum of all prime numbers between 1 and N(inclusive).
 

Example 1:

Input: N = 5
Output: 10
Explanation: 2, 3, and 5 are prime
numbers between 1 and 5(inclusive).
Example 2:

Input: N = 10
Output: 17
Explanation: 2, 3, 5 and 7 are prime
numbers between 1 and 10(inclusive).
*/
*********************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // Code here
   	    long long ans=0;
           vector<bool>v(n+1,true);
           for(int i=2;i*i<=n;i++){
               if(v[i]){
                   for(int j=2*i;j<=n;j=j+i){
                       v[j]=false;
                   }
               }
           }
           for(int i=2;i<=n;i++){
               if(v[i]){
                   ans=ans+i;
               }
           }
           return ans;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
