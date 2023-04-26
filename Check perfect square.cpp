/*
Given a positive integer N, check if it is a perfect square or not.
Note: Try to solve the question using only addition and subtraction operation.

 

Example 1:

Input:
N = 35
Output:
0
Explanation:
35 is not a perfect 
square.
 

Example 2:

Input:
N = 49
Output:
1
Explanation:
49 is a perfect
square.
*/

**********************************************************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPerfectSquare(int N){
        // code here 
             int x=sqrt(N);

      if(x*x==N) return 1;

      return 0;
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
        cin >> N;
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
