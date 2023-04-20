/*
You are given an integer input N and you have to find whether it is the sum or the difference of the integer 5. (5+5, 5+5+5, 5-5,5-5-5+5+5…..)

 

Example 1:

Input:
N = 10
Output:
YES
Explanation:
Because 10 can be 
written as a sum of 5+5.
 

 

Example 2:

Input:
N = 9
Output:
NO
Explanation:
9 can not be written
in the above form.
*/

******************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    string isValid(long long N){
         if(N%5==0){

            return "YES";

        }

        return "NO";
        // code here 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.isValid(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
