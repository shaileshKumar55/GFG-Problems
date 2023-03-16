/*
The task is to find the second smallest number with a given sum of digits as S and the number of digits as D.


**********************************
Example 1:

Input:
S = 9 
D = 2
Output:
27
Explanation:
18 is the smallest number possible with sum = 9
and total digits = 2, Whereas the second
smallest is 27.

**********************************
Example 2:

Input:
S = 16
D = 3
Output:
178
Explanation:
169 is the smallest number possible with sum is
16 and total digits = 3, Whereas the second
smallest is 178.
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
         if(S==1 || D==1) return "-1";
         if(S>=9*D) return "-1";
         string ans(D,'0');
         int sum=S;
         int last=-1;
         for(int i=D-1;i>=0;i--){
             if(sum>9){
                 ans[i]='9';
                 sum-=9;
             }
             else if(sum>0){
                 ans[i]='0'+sum;
                 last=i;
                 sum=0;
             }
             else{
                 ans[i]='0';
             }
         }
         if(ans[0]=='0'){
             ans[0]='1';
             ans[last]-=1;
         }
         int l=D-2;
         while(ans[l]=='9') l--;
         ans[l]+=1;
         ans[l+1]-=1;
         return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
