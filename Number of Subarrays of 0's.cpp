/*
You are given an array arr  of length N of 0's and 1's. Find the total number of subarrays of 0's

Example 1:

Input:
N = 4
arr[] = {0, 0, 1, 0}
Output:
4
Explanation:
Following are the subarrays of
length 1: {0}, {0}, {0} - 3
length 2: {0, 0} - 1
Total Subarrays: 3 + 1 = 4


Example 2:

Input:
N = 4
arr[] = {0, 0, 0, 0}
Output:
10
Explanation:
Following are the subarrays of
length 1: {0}, {0}, {0}, {0} - 4
length 2: {0, 0}, {0, 0}, {0, 0} - 3
length 3: {0, 0, 0}, {0, 0, 0} - 2
length 4: {0, 0, 0, 0} - 1
Total Subarrays: 4 + 3 + 2 + 1 = 10
*/

*************************************************************************************************************************

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr) {
    long ans = 0;
    long cnt = 0;
    
    for(int i = 0; i < n; i++){
        
        if(arr[i] == 0){
            cnt++;
        } 
        else{
            ans += ((long)(cnt*(cnt+1))/2);
            cnt = 0;
        }
    }
    if(cnt != 0){
        ans += ((long)(cnt*(cnt+1))/2);
    }
    return ans;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends
