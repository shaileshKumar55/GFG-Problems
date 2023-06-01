/*
Given two arrays arr[ ] and peanlty[ ], each of size n.
All elements in arr[ ] are in the range of 1 to n. You have to traverse arr[ ] from start to end while following the given conditions.

If element has never occured before, it takes 1 second to move a step ahead.
If element has occured before, it will take penalty[arr[i]] seconds to move a step. Here i is the index of current element with 1 based indexing.
Find the total time taken to traverse through the array.

Example 1:

Input:
n = 4
arr[ ] = {1, 2, 3, 3}
penalty[ ] = {1, 2, 3, 4}
Output: 5
Explanation:


For i = 1, traversal time = 0 second since this is the start point.  
For i = 2, traversal time = 1 second 
For i = 3, traversal time = 1 second 
For i = 4, traversal time = penalty[arr[4]]  = penalty[3] = 3
Total = 0+1+1+3 = 5 
*/
***********************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &penalty) {
        // code here
          sort(arr.begin(),arr.end());
        vector<int> temp;
        long long sum=0;
        temp.push_back(arr[0]);
        
        for(int i=1;i<n;i++){
            
            if(arr[i]==temp.back()){
                sum+=time[arr[i]-1];
            }
            else{
            sum+=1;
            temp.push_back(arr[i]);
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        
        vector<int> penalty(n);
        Array::input(penalty,n);
        
        Solution obj;
        int res = obj.totalTime(n, arr, penalty);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
