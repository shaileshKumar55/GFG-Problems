/*
Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form: 

arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

NOTE: If your transformation is correct, the output will be 1 else the output will be 0. 

Example 1:

Input:
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1
Example 2:

Input:
N = 4
Arr[] = {1, 4, 3, 2}
Output: 1 4 2 3
Explanation: 1 < 4 > 2 < 3
*/

__________________________________________________________________________________________________________________________
  
  
  //{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
           for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 1)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        else if (arr[i] > arr[i + 1] && i%2==0)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    }
};

//{ Driver Code Starts.

bool isZigzag(int arr[], int n){
    int f=1;
    
    for(int i=1; i<n; i++){
        if(f){
            if(arr[i-1]>arr[i]) return 0;
        }
        else{
            if(arr[i-1]<arr[i]) return 0;
        }
        f=f^1;
    }
    
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        bool check=1;
        check=isZigzag(arr,n);
        
        if(check) cout<<"1\n";
        else cout<<"0\n";
        
    }
    return 0;
}

// } Driver Code Ends
