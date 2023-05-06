/*
Given an unsorted array Arr of length N. Your task is to find the maximum difference between the successive elements in its sorted form.
Return 0 if the array contains less than 2 elements.

Example 1:

Input:
N = 3
Arr[] = {1, 10, 5}
Output: 5
Explanation: The maximum difference
between  successive elements of array
is 5(abs(5-10)).
*/

***************************************************************************************************************************************

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int maxSortedAdjacentDiff(int* arr, int n) {
	    // code here
	      sort(arr, arr+n);

     int ans=0;

     int i=0, j=1;

     while(j!=n){

         int k=arr[j]-arr[i];

         ans=max(ans, k);

         i++, j++;

     }

     return ans;
	}
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxSortedAdjacentDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
