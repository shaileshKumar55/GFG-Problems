/*
Sometimes, the normal if-else isn't enough. In such cases, we have what we call ladder if and else conditions. So here we'll learn to use them.

Given a positive integer n. Your task is to check if it is divisible as given below:
1. If it is divisible by 11, print "Eleven".
2. If it is divisible by 3, print "Three".
3. If it is divisible by 2, print "Two".
4. If not following the above three rules, print "-1".
Note: If n is divisible by more than one of the above-given numbers, print the one which is the largest.

Example 1:

Input:n = 3
Output:Three
Example 2:

Input:n = 11
Output:Eleven
*/
**************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

// CPP code to check divisibility of number
#include <bits/stdc++.h>
using namespace std;

// Prorotype of function
void isDivisibleByPrime(int);


// } Driver Code Ends
//User function Template for C++

// Function to check divisibility
// N is the input integer
void isDivisibleByPrime(int n){
    
    // Your code here
    if(n%11==0)

    cout<<"Eleven";

    else if(n%3==0)

    cout<<"Three";

    else if(n%2==0)

    cout<<"Two";

    else

    cout<<"-1";

    cout<<endl;
    
    
    
}

//{ Driver Code Starts.

// Driver Code to test above function
int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        isDivisibleByPrime(n);
        
    }
    
	return 0;
}
// } Driver Code Ends
