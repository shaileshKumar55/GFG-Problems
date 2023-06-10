/*
There is a string of size n containing only 'A' and 'O'. 'A' stands for Apple, and 'O' stands for Orange. We have m number of spells, each spell allows us to convert an orange into an apple.

Find the longest subarray of apples you can make, given a string and the value of m.


Example 1:

Input:
N = 5
M = 1
arr[] = 'AAOAO'
Output: 4 
Explanation: Changing the orange at 
3rd position into an apple gives 
us the maximum possible answer.

Example 2:

Input:
N = 5
M = 1
arr = 'AOOAO'
Output: 2
Explanation: Changing any orange into 
an apple will give us a sequence 
of length 2.

*/

*******************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
           int t=s.size();

       vector<int>v;

       for(int i=0;i<t;++i){

           if(s[i]=='O')

            v.push_back(i);

       }

       if(n<m)

       return n;

      if(n==m and (all_of(s.begin(),s.end(),[](char c){return c=='O';})))

      return n;

      if(v.size()<=m)

         return n;

        int i=1,j=m;

        int maxi=v[m];

        while(j<v.size()){

            if(j==v.size()-1 and t-1>=j){

                maxi=max(maxi,t-v[i-1]-1);

            }

            else{

                 maxi=max(maxi,v[j+1]-v[i-1]-1);

            }

            i++;

            j++;

        }

        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
