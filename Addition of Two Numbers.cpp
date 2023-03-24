/*
Given two numbers A and B. Your task is to return the sum of A and B.

 

Example 1:

Input:
A = 1, B = 2
Output:
3
Explanation:
Addition of 1 and 2 is 3.
 

Example 2:

Input:
A = 10, B = 20
Output:
30
Explanation:
Addition os 10 and 20 is 30.
*/


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int addition(int A, int B){
        // code here 
        int c= (A+B);
        return c;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addition(A,B) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
