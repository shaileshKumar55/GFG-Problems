/*
Given a string S. The task is to find all permutations (need not be different) of a given string.

Example 1:

Input:
S = AAA
Output: AAA AAA AAA AAA AAA AAA
Explanation: There are total 6 permutations, as given in the output.
Example 2:

Input:
S = ABSG
Output: ABGS ABSG AGBS AGSB ASBG ASGB
BAGS BASG BGAS BGSA BSAG BSGA GABS
GASB GBAS GBSA GSAB GSBA SABG SAGB
SBAG SBGA SGAB SGBA
Explanation: There are total 24 permutations, as given in the 
*/

*******************************************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
     void solve(int i, int n, vector<string>&ans, string &S){
        if(i==n){
            ans.push_back(S);
            return;
        }
        
        for(int j=i; j<n; j++){
            swap(S[i], S[j]);
            solve(i+1, n, ans, S);
            swap(S[i], S[j]);
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
          int n=S.size();
        if(n==0 || n==1) return {S}; 
        vector<string>ans;
        solve(0, n, ans, S);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
