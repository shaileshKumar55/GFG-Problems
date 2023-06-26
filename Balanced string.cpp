/*
Given an integer N.Create a string using only lowercase characters from a to z that follows the given rules.

When N is even:

Use N/2 characters from the beginning of a-z and N/2 characters from the ending of a-z.

When N is greater than 26,continue repeating the instructions until length of string becomes N.

When N is odd:

Case 1: If the sum of digits of N is even, Select (N+1)/2 characters from the beginning of a-z and (N-1)/2 characters from the ending of a-z.

Case 2: If the sum of digits of N is odd, Select (N-1)/2 characters from the beginning of a-z and (N+1)/2 characters from the ending of a-z.

When N is greater than 26,continue repeating the instructions until length of string becomes N.

 

Example 1:

Input: 
N=21
Output: 
abcdefghijpqrstuvwxyz
Explanation:
Since 21 is odd and sum of digits
of 21 is also odd,we take (21-1)/2=10 
characters from the beginning and 
(21+1)/2=11 characters from the 
end of a-z.
Example 2:

Input:
N=28 
Output: 
abcdefghijklmnopqrstuvwxyzaz
Explanation: 
Since 28>26, we keep repeating 
the process until length of string becomes 
28.
*/
*********************************************************************************************************************************

//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N) {
        // code here
          string ar="";

        string ans="";

        for(char i='a';i<='z';i++){

            ar+=i;

        }

        if(N%2==0){

            while(N>=26){

                ans+=ar;

                N-=26;

            }

            for(int i=0;i<N/2;i++){

                ans+='a'+i;

            }

            for(int i=N/2-1;i>=0;i--){

                ans+='z'-i;

            }

        }

        else{

            

            int sum=0;

            int asd=N;

            while(asd>0){

                sum+=asd%10;

                asd/=10;

            }

            while(N>=26){

                ans+=ar;

                N-=26;

            }

            if(sum%2==0){

                for(int i=0;i<(N+1)/2;i++){

                    ans+='a'+i;

                }

                for(int i=(N-1)/2-1;i>=0;i--){

                    ans+='z'-i;

                }

            }

            else{

                for(int i=0;i<(N-1)/2;i++){

                    ans+='a'+i;

                }

                for(int i=(N+1)/2-1;i>=0;i--){

                    ans+='z'-i;

                }

            }

            

        }

        return ans;

    }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends



