/*
Given a string S which consists of only lowercase English alphabets, you have to perform the below operations:
If the string S contains any repeating character, remove the first repeating character and reverse the string and again perform the above operation on the modified string, otherwise, you stop.
You have to find the final string.

Example 1:

Input: S = "abab"
Output: ba
Explanation:
In 1st operation: The first repeating 
character is a. After Removing the first 
character, S = "bab". After Reversing the 
string, S = "bab".
In 2nd operation: The first non repeating 
character is b. After Removing the first 
character, S = "ab". After Reversing the 
string, S = "ba".
Now the string S does not contain any 
repeating character.


Example 2:

Input: S = "dddd"
Output: d
*/


*************************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        int n = s.length() ;
        int i = 0;
        int j = s.length()-1 ;
        unordered_map<char,int> mp ;
        for(auto it : s){
            mp[it]++;
        }
        bool flag=true ;
        while( i <= j ){
            if( flag ){
                if( mp[s[i]]>1){
                  mp[s[i]]--;
                  s[i] = '0' ;
                  flag=false;
                  
                }
                i++;
            }
            else {
                if( mp[s[j]]>1) {
                    mp[s[j]]-- ;
                    s[j]='0' ;
                    flag = true ;
                }
                j--;
            }
        }
        string ans ;
        for(auto it : s ){
            if( it != '0' )
            ans+=it ;
        }
        if( flag )
        return ans;
        reverse(ans.begin(),ans.end()) ;
        return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
