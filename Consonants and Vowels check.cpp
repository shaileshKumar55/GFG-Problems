/*
Let's learn about CPP strings here. CPP strings are quite different from their C counterpart and have various methods that can be invoked on them. We hope you've read the articles.

You are given a string s containing only lowercase letters. You need to count the number of vowels and the number of consonants.

If vowel count > consonant count then print - Yes(without quotes).
If vowel count < consonant count then print - No(without quotes).
If vowel count = consonant count then print - Same(without quotes).
Example 1:

Input:s = "aaaaaa"
Output:Yes
Example 2:

Input:s = "the quick brown fox jumps over the lazy dog"
Output:No
*/
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void checkString(string s);


// } Driver Code Ends
//User function Template for C++

void checkString(string s)
{
    int v=0;
    int c=0;
    
    //Your code here
    
    if(v>c)
        cout<<"Yes";
    else if(c>v)
        cout<<"No";
    else
        cout<<"Same";
    
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    
	    //function call
	    checkString(s);
	   
	}
	return 0;
}


// } Driver Code Ends
