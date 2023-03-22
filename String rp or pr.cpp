/*
Example 1:

Input:
X = 5, Y = 4
S = "abppprrr"
Output: 15
Explanation: 
Here, S = "abppprrr" 
X= 5, Y=4.
Remove "pr", new string S = "abpprr".
Remove "pr", new string S = "abpr".
Remove "pr", new string S = "ab".
In total, we removed "pr" 3 times, 
so total score is 3*X + 0*Y = 3*5 =15.
 

 

Example 2:

Input:
X = 7, Y = 7
S = "prpptppr"
Output: 14
Explanation: 
Here, S = "prpptppr" 
X= 7, Y=7.
As both have the same amount we can first 
remove either pr or rp. Here we start with pr
Remove "pr", new string S = "pptppr".
Remove "pr", new string S = "pptp".
In total, we removed "pr" 2 times, 
so total score is 2*X + 0*Y = 2*7 =14.
*/

*****************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{   
public:
    long long remove(string &s, string r, int x) {
        long long i = 0, ans = 0; 
        for (int j = 0; j < s.size(); ++j) {
            s[i++] = s[j];
            if (i>=2 && s[i-2] == r[0] && s[i-1] == r[1]) i -= 2, ans += x; 
        }
        s.resize(i);
        return ans;
    }
    long long solve(int x,int y,string s){
        int N = s.size();
        string a = "pr", b = "rp";
        if (x < y){ 
            swap(a, b);
            swap(x, y);
        }
        return remove(s, a, x) + remove(s, b, y);
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends
