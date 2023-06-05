/*
You are given an array arr of n integers. You must return the minimum number of operations required to make this array 0. For this you can do an operation :

Choose a sub-array of non-zero elements & replace all with 0(0 must be present in arr, if not you can not replace it).
Example 1:

Input:
n = 4
arr = {3,0,4,5}
Output:
2
Explanation:
First, we can choose 3 replace with 0(which is on 1st Index) and in the second operation, we can choose 4 & 5 -> replace with 0(1st Index).

Example 2:

Input:

n = 8 
arr = {10,4,9,6,10,10,4,4} 
Output: 
-1 
Explanation: 
If we do operations here, we can not make the entire 0 
because no 0 is present in the array, hence -1.
*/
****************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int num_found=0,ans=0,zero_found=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                zero_found=1;
                if(num_found==1){
                    num_found=0;
                    ans++;
                }
            }
            else if(arr[i]!=0)
                num_found=1;
        }
        
        if(zero_found==0)
            return -1;
        if(num_found==1 && ans!=0)
            return ++ans;
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
