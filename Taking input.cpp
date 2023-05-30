/*
Before implementing any algorithm, we should be thorough with taking inputs. Here, we will learn how to read inputs.
You are given two inputs: a(integer), and b(string). You need to take the input and print a and b separated by a space.

Note : You don't have to print any new lines.

Example 1:

Input:
a = 5
b = Hello
Output:
5 Hello
Example 2:

Input:
a = 7
b = Geeks
Output:
7 Geeks
 
*/

************************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;

 void inputData();
 

// } Driver Code Ends
//User function Template for C++

 void inputData()
{
           int a;
      string b;
      cin>>a>>b;
      cout<<a<<" " <<b;
       //Use cin to take input and cout a and b with a space between them. 
       //You don't have to print any new lines after cout 
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //function call
        inputData();
        cout<<endl;
    }
}



// } Driver Code Ends
