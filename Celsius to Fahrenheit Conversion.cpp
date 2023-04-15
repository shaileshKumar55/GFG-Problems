/*
Given a temperature in celsius C. You have to convert it in Fahrenheit.
 

Example 1:

Input:
C = 32
Output:
89.60
Explanation:
For 32 degree C temperature 
in farenheit = 89.60
Example 2:

Input:
C = 25
Output:
77.00
Explanation:
For 25 degree C temperature 
in farenheit = 77.

*/

______________________________________________________________________________________________________________________________
  
  //{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    double celciusToFahrenheit(int C){
        //code here
          double F;
        F=C*9/5.0+32.0;
        return F;
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
        cout <<setprecision(2)<<fixed<< ob.celciusToFahrenheit(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
