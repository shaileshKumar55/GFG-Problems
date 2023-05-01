/*
Geek is extremely punctual but today even he is not feeling like doing his homework assignment. He must start doing it immediately in order to meet the deadline. For the assignment, Geek needs to type a string s.
To reduce his workload, he has decided to perform one of the following two operations till he gets the string.

Append a character at the end of the string.
Append the string formed thus far to the end of the string. (This can not be done more than once.)
Help Geek find the minimum operations required to type the given string.


Example 1:

Input:
s = abcabca
Output: 5
Explanation: a -> ab -> abc -> abcabc 
-> abcabca

Example 2:

Input:
s = abcdefgh
Output: 8
Explanation: a -> ab -> abc -> abcd 
-> abcde -> abcdef -> abcdefg -> abcdefgh
*/

***************************************************************************************************************************************************

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
         string s1;
        string s2;
        string s3;
        int y=1;
        for(int i=0;i<s.size();i++){
            s1=s1+s[i];
            if(s.find(s1+s1)==0){
                s3=s1+s1;
                y=0;
            }
           if(s2.size()<s3.size()){
               s2=s3;
           }
        }
        if(y==1){
            return s.size();
        }
        else{
            int ans=(s.size()-(s2.size()/2)+1);
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends
