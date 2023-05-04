/*
Suppose there are two friends and now they want to test their friendship that how much compatible they are. Given the numbers n numbered from 1 to n and they are asked to rank the numbers. The task is find the compatibility difference between them. Compatibility difference is the number of mis-matches in the relative ranking of the same movie given by them.

Example 1:

Input : N=5
        a1[] = {3, 1, 2, 4, 5}
        a2[] = {3, 2, 4, 1, 5}
Output : 2
Explanation : Compatibility difference is two
              because first ranks movie 1 before
              2 and 4 but other ranks it after.

Example 2:
 

Input : N=5
        a1[] = {5, 3, 1, 2, 4}
        a2[] = {3, 1, 2, 4, 5}
Output: 5
Explanation: Total difference is four due to
             mis-match in position of 5.
*/

****************************************************************************************************************************************

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
int findDifference(int a1[], int a2[], int n);

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a1[n],a2[n];
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            cin>>a2[i];
        }
    cout << findDifference(a1, a2, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends



int findDifference(int a1[], int a2[], int n)
{
    //Your code here
     int cnt=0;
   for(int i=0; i<n; i++) {
       int j=i+1;
       while(a1[i]!=a2[i]) {
           cnt++;
           swap(a1[i], a1[j]);
           j++;
       }
   }
   return cnt;
}
