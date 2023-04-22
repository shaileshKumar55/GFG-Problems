/*
For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.
 

Example 1:

Input:
N = 5
Output:
1
Explanation:
5 has 2 factors 1 and 5 only.


Example 2:

Input:
N = 25
Output:
0
Explanation:
25 has 3 factors 1, 5, 25
*/

*******************************************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        if(N==1){

            return 0;

        }

        if(N==2){

            return 1;

        }

    
        int ans = 1;

        

        for(int i = 2; i<=sqrt(N); i++){

            if(N%i == 0){

                ans = 0;

                break;

            }

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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
