/*
There are many times when we need to take input of a string that contains multiple words.
Here, we will learn how to take input of a string that comprises of multiple words. Also, we will learn to clear the input buffer. Your task is to take input of strings and integers and produce the output.

Note : Use std:cin, getline(), cin.ignore().
Note 2: When cin is followed by getline, it creates a problem that can be circumvented by using cin.ignore. You can read more about it here

Input Format:
First line of input contains T,  number of testcases. For each testcase, there will be three lines of input. First line contains string, second line contains integer, and third line again contains string.

Output Format:
For each testcase, print the variables in same order as taken in input.
*/

******************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void getLineAndIgnore();


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

// Function to take input of string using getline
void getLineAndIgnore(){
    
    string a, d;
    int b;
   getline(cin,a);
    // Your code here
    cin>>b;
    cin.ignore();
    getline(cin,d);
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}

//{ Driver Code Starts.

// Driver Code
int main()
{
    // Number of testcase input
    int t;
    cin >> t;
    cin.ignore(); //Ignoring the newline so it isn't consumed by getline. Read about it!!
    while(t--){
        getLineAndIgnore();   
    }
   
    return 0;
} 
// } Driver Code Ends
