/*
Given string str, find the length of the longest repeating subsequence such that it can be found twice in the given string.

The two identified subsequences A and B can use the same ith character from string str if and only if that ith character has different indices in A and B. For example, A = "xax" and B = "xax" then the index of first "x" must be different in the original string for A and B.

Example 1:

Input:
str = "axxzxy"
Output: 2
Explanation:
The given array with indexes looks like
a x x z x y 
0 1 2 3 4 5

The longest subsequence is "xx". 
It appears twice as explained below.

subsequence A
x x
0 1  <-- index of subsequence A
------
1 2  <-- index of str 


subsequence B
x x
0 1  <-- index of subsequence B
------
2 4  <-- index of str 

We are able to use character 'x' 
(at index 2 in str) in both subsequences
as it appears on index 1 in subsequence A 
and index 0 in subsequence B.
Example 2:

Input:
str = "axxxy"
Output: 2
Explanation:
The given array with indexes looks like
a x x x y 
0 1 2 3 4

The longest subsequence is "xx". 
It appears twice as explained below.

subsequence A
x x
0 1  <-- index of subsequence A
------
1 2  <-- index of str 


subsequence B
x x
0 1  <-- index of subsequence B
------
2 3  <-- index of str 

We are able to use character 'x' 
(at index 2 in str) in both subsequences
as it appears on index 1 in subsequence A 
and index 0 in subsequence B.


*/

************************************************************************************************************************************************//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		        int y=str.size();
            string temp=str;
            vector<int> prev(y+1,0);
            vector<int> cur(y+1,0);
            for(int i=1;i<=y;i++)
            {
                for(int j=1;j<=y;j++)
                {
                    int p1=0,p2=0;
                    if(str[i-1]==temp[j-1]&&i!=j)
                    {
                        cur[j]=1+prev[j-1];
                       
                    }
                    else
                    {
                        cur[j]=max(prev[j],cur[j-1]);
                    }
                    
                   
                }
                prev=cur;
            }
            
            return prev[y];


		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
