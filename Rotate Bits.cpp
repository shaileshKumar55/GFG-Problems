/*
Given an integer N and an integer D, rotate the binary representation of the integer N by D digits to the left as well as right and print the results in decimal values after each of the rotation.
Note: Integer N is stored using 16 bits. i.e. 12 will be stored as 0000.....001100.

Example 1:

Input:
N = 28, D = 2
Output:
112
7
Explanation: 28 in Binary is:
000...011100
Rotating left by 2 positions, it becomes
00...1110000 = 112 (in decimal).
Rotating right by 2 positions, it becomes
000...000111 = 7 (in decimal).

‹Example 2:

Input: 
N = 29, D = 2
Output: 
116
16391
Explanation: 29 in Binary is:
000...011101
Rotating left by 2 positions, it becomes
00...1110100 = 116 (in decimal).
Rotating right by 2 positions, it becomes
010...000111 = 16391 (in decimal).
*/

**************************************************************************************************************************


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            int a,b;
            d = d%16;
            a=(n<<d|(n>>(16-d)))&0xFFFF;
            b=(n>>d|(n<<(16-d)))&0xFFFF;
            return{a,b};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
