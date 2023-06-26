/*
Given an array of N strings, find the longest common prefix among all strings present in the array.


Example 1:

Input:
N = 4
arr[] = {geeksforgeeks, geeks, geek,
         geezer}
Output: gee
Explanation: "gee" is the longest common
prefix in all the given strings.
Example 2:

Input: 
N = 2
arr[] = {hello, world}
Output: -1
Explanation: There's no common prefix
in the given strings.
*/

*****************************************************************************************************************************************************
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        int cnt=0;
        string s11=arr[0];
        for(int i=1;i<N;i++)
        {
            string s1=arr[i];
            // string s2=arr[i+1];
            // cout<<s1;
            // cout<<s2;
            for(int i=0;i<min(s11.length(),s1.length());i++)
            {
                // cout<<i;
                if(s11[i]==s1[i])
                cnt++;
                else 
                break;
                
            }
            s11=s1.substr(0,cnt);
            // cout<<s11<<endl;
            cnt=0;
        }
        if(s11.empty())
        return "-1";
        
        return s11;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
