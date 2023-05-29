/*
Macro is one of the most important part of CPP preprocessors. It allows us to define variables and functions and it basically works by substituting the value or function during the preprocessing stage of code conversion(High level to Low level). So, let's dive into preprocessors!

You are given two inputs: a(integer),and b(integer). You need to print a * b .

Input Format:
First line of input conatins number of testcases T. For each testcase, there will be one line of input containing a and b.

Output Format:
For each testcase, print a*b.
*/
*********************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#define MULTI(a,b) (a*b) //The multiplication macro function.
/*Whenever MULTI(a,b) is encountered, it is replaced by (a*b) during the preprocessing stage*/
using namespace std;

void macros(int a,int b);


// } Driver Code Ends
//User function Template for C++

void macros(int a,int b)
{
    //See the macro defined at the top of the code. Use that macro to find a*b
    //Use only macro to complete this task
     cout<<a*b<<endl;
    
    cout<<endl;
}

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    
	    //Input a and b
	    cin>>a>>b; 
	    
	    //function call
	    macros(a,b);
	    
	}
	return 0;
}
// } Driver Code Ends
