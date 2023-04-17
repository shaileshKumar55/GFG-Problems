/*
You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y such that (x!=y).

Example 1:

Input:
N = 4
A[] = {1,2,3,2}
x = 1, y = 2
Output: 1
Explanation: x = 1 and y = 2. There are
two distances between x and y, which are
1 and 3 out of which the least is 1.


Example 2:

Input:
N = 7
A[] = {86,39,90,67,84,66,62}
x = 42, y = 12
Output: -1
Explanation: x = 42 and y = 12. We return
-1 as x and y don't exist in the array.
*/

*********************************************************************************************************************

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
         int x_index = -1;
        int y_index = -1;
        int mini = INT_MAX;
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
                x_index = i;
            if(a[i] == y)
                y_index = i;
                
            if(x_index != -1 && y_index != -1)
                if(abs(x_index-y_index) < mini)
                    mini = abs(x_index-y_index);
        }
        if(mini == INT_MAX)
            return -1;
        return mini;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
