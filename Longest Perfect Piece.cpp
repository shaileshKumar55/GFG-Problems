/*
Given an array arr[] of N Numbers. A Perfect Piece is defined as a subarray such that the difference between the minimum and the maximum value in that range is at most 1. Find the Maximal Length Perfect Piece.

 

Example 1:

Input:
N = 4
arr[] = {8, 8, 8, 8}
Output:
4
Explanation:
The longest subarray is [1, 4]
where maximum=8 and minimum = 8 and
difference is 0, which is less than 1.
Its length is 4.
Example 2:

Input:
N = 11
arr[] = {5, 4, 5, 5, 6, 7, 8, 8, 8, 7, 6}
Output:
5
Explanation:
The longest subarray is [6, 10]
where maximum=8 and minimum = 7 and
difference is 1. Its length is 5. 
*/
****************************************************************************************************************************************

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
         multiset<int> ms;
        int k = 0, ans = 0;
        for(int i=0; i<N; i++)
        {
            ms.insert(arr[i]);
            while(k < N and !ms.empty() and *ms.rbegin() - *ms.begin() > 1)
                    ms.erase(arr[k++]);
            ans = max(ans, i-k+1);
        }
        while(k < N and !ms.empty() and *ms.rbegin() - *ms.begin() > 1)
                    ms.erase(arr[k++]);
            ans = max(ans, N-k);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
