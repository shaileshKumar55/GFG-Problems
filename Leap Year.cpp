/*
For an input year N, find whether the year is a leap or not. 
 

Example 1:

Input:
N = 4
Output:
1
Explanation:
4 is not divisible by 100
and is divisible by 4 so its
a leap year


Example 2:

Input:
N = 2021
Output:
0
Explanation:
2021 is not divisible by 100
and is also not divisible by 4
so its not a leap year
*/

***************************************************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution{
public:
    int isLeap(int N){
 
        if(N% 4 ==0 && N%100 !=0){
            return 1;
        }
        else if(N%400 == 0){
            return 1;
        }

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
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
