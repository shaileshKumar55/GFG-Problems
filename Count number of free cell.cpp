/*
Suppose you have a Matrix size n*n, and given an integer k and a set of coordinates arr of size k*2. Initially, the matrix contains only 0. You are given k tasks and for each task, you are given two coordinates (r = arr[i][0],c = arr[i][1]) [1 based index r and c]. Where coordinates (r,c) denotes rth row and cth column of the given matrix.

You have to perform each task sequentially in the given order. For each task, You have to put 1 in all cells of rth row  and all cells of cth column.

After each task, You have to calculate the number of 0 present in the matrix and return it.

Example 1:

Input:
n = 3, k= 3
arr =
{{2, 2},
 {2, 3},
 {3, 2}}
Output: 4 2 1
Explanation: 
After 1st Operation, all the 2nd row
and all the 2nd column will be filled by
1. So remaning cell with value 0 will be 4
After 2nd Operation, all the 2nd row and all
the 3rd column will be filled by 1. So 
remaning cell with value 0 will be 2.
After 3rd Operation cells having value 0 will
be 1.
Example 2:

Input:
n = 2, k = 2
arr = 
{{1, 2},
 {1, 1}}
Output: 1 0
Explanation: 
After 1st Operation, all the 1st row and 
all the 2nd column will be filled by 1. 
So remaning cell with value 0 will be 1.
After 2nd Operation, all the 1st row and 
all the 1st column will be filled by 1. 
So remaning cell with value 0 will be 0. 
*/

*********************************************************************************************************************************
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
       vector<long long int > v;
      long long int t = n*n;
      unordered_set<int> r,c;
      for(int i=0;i<k;i++){
              if(r.find(arr[i][0])==r.end())
                     {t-=n;
                      t+=c.size();
                      r.insert(arr[i][0]);
                     }
              if(c.find(arr[i][1])==c.end())
                     {t-=n;
                      t+=r.size();     
                      c.insert(arr[i][1]);
                     }
              v.push_back(t);     
      }
      return v;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends

