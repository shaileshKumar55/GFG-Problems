/*
Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.

*/

***********************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
   char getMaxOccuringChar(string str)
    {
        map<char,int> result;
        int max =INT_MIN;
        char x;
        int length = str.length();
        for(int i=0;i<length;i++){
            result[str[i]]+=1;
            if(max<result[str[i]]) {
                max = result[str[i]];
                x = str[i];
            }
            else if(max ==result[str[i]]){
                if(x>str[i]) x=str[i];
            }
        }
        return x;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
