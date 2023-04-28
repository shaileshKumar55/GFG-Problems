/*
Given a string S. The task is to count the number of substrings which contains equal number of lowercase and uppercase letters. 

Example 1:

Input:
S = "gEEk"
Output: 3
Explanation: There are 3 substrings of
the given string which satisfy the
condition. They are "gE", "gEEk" and "Ek".


Example 2:

Input:
S = "WomensDAY"
Output: 4
Explanation: There are 4 substrings of 
the given string which satisfy the
condition. They are "Wo", "ensDAY", 
"nsDA" and "sD"
*/

----------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------
  
  
//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int countSubstring(string S) {
        unordered_map<int, int> map;
        map[0] = 1;
        int ans = 0;
        int sum = 0;
        for (char ch : S) {
            int val;
            if (isupper(ch)) {
                val = 1;
            }
            else {
                val = -1;
            }
            sum += val;
            if (map.find(sum) != map.end()) {
                ans += map[sum];
            }
            map[sum]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends
  
