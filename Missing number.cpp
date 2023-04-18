/*

Example 1:

Input:                                                       
N = 4                                        
A[] = {1, 4, 3}
Output:
2     
Explanation:
Vaibhav placed 4 integers but he picked
up only 3 numbers. So missing number
will be 2 as it will become 1,2,3,4.
 

Example 2:

Input:                        
N = 5
A[] = {2, 5, 3, 1}
Output:
4
Explanation:
Vaibhav placed 5 integers on the board,
but picked up only 4 integers, so the
missing number will be 4 so that it
will become 1,2,3,4,5.
*/

***************************************************************************************************************************************************

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int n)
{
    // Your code goes here
    int total = (n*(n+1))/2;
    int sum = accumulate(A, A+n-1,0);
    return total - sum;
  
}
