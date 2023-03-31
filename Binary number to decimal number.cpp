/*
Given a Binary Number B, find its decimal equivalent.
 

Example 1:

Input: B = 10001000
Output: 136


Example 2:

Input: B = 101100
Output: 44
*/
_______________________________________________________________________________________________________________________________
  
  //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
         int base = 1;

        int val = 0;

        int size = str.length();

        

        for(int i=size-1;i>=0;i--)

        {

            val = val+((int)(str[i]-'0')*base);

            base = base*2;

        }

        return val;
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
