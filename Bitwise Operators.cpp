/*
Bitwise operators are useful when we want to work with bits. Here, we'll take a look at them.

Given three positive integers a, b and c. Your task is to perform some bitwise operations on them as given below:
1. d = a ^ a
2. e = c ^ b
3. f = a & b
4. g = c | (a ^ a)
5. h = ~e
Note: ^ is for xor. The working of bitwise operators can be found here.

Example:

Input:
a = 4
b = 8
c = 2
Output:
0
10
0
2
-11
*/

*******************************************************************************************************************************************************

//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// Function Prototype
void bitWiseOperation(int, int, int);


// } Driver Code Ends
// User function Template for C++

// Function to perform bitwise manipulations
// a, b and c are input integers
void bitWiseOperation(int a, int b, int c) {

    // Your code here
     int d = a^a;
    int e = c^b;
    int f = a&b;
    int g = c | d;
    
    cout<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<(~e)<<endl;
}

//{ Driver Code Starts.

// Driver code to test above function
int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}
// } Driver Code Ends
