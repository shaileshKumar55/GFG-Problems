/*
Given three stacks S1, S2 & S3 of size N1, N2 & N3 respectively, having only Positive Integers. The task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed. Stacks are represented as an array, and the first index of the array represents the top element of the stack.

Example 1:

Input:
N1 = 3, N2 = 4, N3 = 2
S1 = {4,2,3}
S2 = {1,1,2,3}
S3= {1,4}
Output:
5
Explanation:
We can pop 1 element from the 1st stack, and 2
elements from the 2nd stack. Now remaining elements
yield the equal sum of the three stacks, that is 5.
Example 2:

Input:
N1 =2, N2 = 1, N3 = 3
S1 = {4,7}
S2 = {10}
S3 = {1,2,3}
Output:
0
Explanation:
We will never get an equal sum after popping
some elements, so the answer will be 0.
*/

*********************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
           int s1=0;
        int s2=0;
        int s3=0;
        for(int i=0;i<N1;i++)
        {
            s1+=S1[i];
        }
          for(int i=0;i<N2;i++)
        {
            s2+=S2[i];
        }
           for(int i=0;i<N3;i++)
        {
            s3+=S3[i];
        }
        
        int mn=min(s1,min(s2,s3));
        int i=0,j=0,k=0;
        while(i<N1&&j<N2&&k<N3)
        {
            if(s1==mn&&s2==mn&&s3==mn)
            break;
            if(s1>mn)
            {
                s1=s1-S1[i];
                i++;
            }
            if(s2>mn)
            {
                s2=s2-S2[j];
                j++;
            }
            if(s3>mn)
            {
                s3=s3-S3[k];
                k++;
            }
            mn=min(s1,min(s2,s3));
        }
        // if(i==N1||j==N2||k==N3)
        // return 0;
        return mn;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
