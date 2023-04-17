/*
Given a Binary Heap of size N in an array arr[]. Write a program to calculate the height of the Heap.

Example 1:

Input: N = 6
arr = {1, 3, 6, 5, 9, 8}
Output: 2
Explaination: The tree is like the following
           (1)
       /   \
    (3)    (6)
    / \     /
  (5) (9) (8)
  
  
Example 2:

Input: N = 9
arr = {3, 6, 9, 2, 15, 10, 14, 5, 12}
Output: 3
Explaination: The tree looks like following
               (2)
        /      \
      (3)      (9)
     /  \     /   \
   (5) (15) (10) (14)
   / \
 (6) (12)
*/

******************************************************************************************************************************************

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int heapHeight(int N, int arr[]){
        // code here
           return log2(N);
    }
};

//{ Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.heapHeight(N, arr) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
