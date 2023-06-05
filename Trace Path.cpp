/*
There is a rectangular path for a Train to travel consisting of n rows and m columns. The train will start from one of the grid's cells and it will be given a command in the form of string s consisting of characters L, R, D, U. Find if it is possible to travel the train inside the grid only.
Note:
If the train is at position (i,j)
on taking 'L' it goes to (i,j-1),
on taking 'R' it goes to (i,j+1),
on taking 'D' it goes to (i-1,j),
on taking 'U' it goes to (i+1,j).
You just need to tell if it's possible or not, you don't have to tell number of ways in which it is possible.

Example 1:

Input: 
n = 1, m = 1
s = "R"
Output: 0
Explaination: There is only one cell(1,1). So train can only start from (1,1). On taking right(R) train moves to (1,2), which is out of grid.
Therefore there is no cell from where train can start and remain inside the grid after tracing the route. 
Example 2:

Input: 
n = 2, m = 3
s = "LLRU"
Output: 1
Explaination: One possible cell is (1,3)
(1,3) --> (1,2) --> (1,1) --> (1,2) --> (2,2). Thus there is a cell from where if train starts, it remains inside the grid throughout tracing the route.

*/


*************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
         int c1=0,c2=0,c3=0,c4=0;
        for(auto x:s){
            if(x=='L'){
                c1++;
            if(c2)c2--;
            }
           if(x=='R'){
                c2++;
            if(c1)c1--;
           }
            if(c1>=m || c2 >=m)
                  return 0;
           
            if(x=='U'){
                c3++;
            if(c4)c4--;
            }
            if(x=='D'){
                c4++;
            if(c3)c3--;
             }
        if(c3>=n || c4 >=n)
            return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
