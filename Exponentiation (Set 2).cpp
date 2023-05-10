/*
For two given positive numbers a and b. Find ab. Output your number modulus 109+7.

Example 1:

Input: a = 1, b = 1
Output: 1
Explanation: 11 % (109+7) = 1

â€‹Example 2:

Input: a = 2, b = 5
Output: 32
Explanation: 25 % (109+7) = 32
*/
*****************************************************************************************************************************

//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int power(int a, long long int b) { 
        //complete the function here
            long long int ans=1;

        while(b>0){

            if(b&1) ans=(ans*a)%mod;

            a=(a*a)%mod;

            b=b>>1;

        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends
