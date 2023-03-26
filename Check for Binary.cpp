/*
Given a non-empty sequence of characters str, return true if sequence is Binary, else return false

Example 1:

Input:
str = 101
Output:
1
Explanation:
Since string contains only 0 and 1, output is 1.


Example 2:

Input:
str = 75
Output:
0
Explanation:
Since string contains digits other than 0 and 1, output is 0.
*/

***********************************************************************************************

//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
   // Your code here
     for(int i=0;i<str.length();i++)

    {

        if(str[i]!='1' && str[i]!='0')

            return false;

    }

    return true;
}
