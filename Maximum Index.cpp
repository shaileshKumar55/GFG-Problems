/*
Given an array arr[] of n non-negative integers. The task is to find the maximum of j - i (i<=j) subjected to the constraint of arr[i] <= arr[j].

Example 1:

Input:
n = 9
arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output: 
6
Explanation: 
In the given array arr[1] < arr[7]  satisfying 
the required condition (arr[i] <= arr[j])  thus 
giving the maximum difference of j - i which is
6(7-1).
Example 2:

Input:
N = 2
arr[] = {18, 17}
Output: 
0
Explanation: 
We can either take i and j as 0 and 0 
or we cantake 1 and 1 both give the same result 0.
*/

**************************************************************************************************************************************************

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
         int ans=-1;
        
        vector<int> minArray(n,0);
        vector<int> maxArray(n,0);
        
        minArray[0]=arr[0];
        maxArray[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++)
        {
            minArray[i]=min(minArray[i-1],arr[i]);
        }
        for(int j=n-2;j>=0;j--)
        {
            maxArray[j]=max(maxArray[j+1],arr[j]);
        }
        
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(maxArray[j]>=minArray[i])
            {
                ans = max(ans,j-i);
                j++;
            }
            else
            {
                i++;
            }
            
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
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
