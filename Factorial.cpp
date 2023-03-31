/*
Given a positive integer, N. Find the factorial of N.
 

Example 1:

Input:
N = 5
Output:
120
Explanation:
5*4*3*2*1 = 120


Example 2:

Input:
N = 4
Output:
24
Explanation:
4*3*2*1 = 24
*/

__________________________________________________________________________________________________________________
  
  //{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
        //code here
         if(N==1 || N==0)

        return 1;

        return N * factorial(N-1);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
