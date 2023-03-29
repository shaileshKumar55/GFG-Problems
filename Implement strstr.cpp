/*
Example 1:

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.
 

Example 2:

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).
*/


************************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     if(s.find(x)!=-1){

        return s.find(x);

}

     return -1;
}
