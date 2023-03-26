/*
Given an integer array arr of size n, you need to sum the elements of arr.

Example 1:

Input:
n = 3
arr[] = {3 2 1}
Output: 6


Example 2:

Input:
n = 4
arr[] = {1 2 3 4}
Output: 10
*/


_______________________________________________________________________________________________________________________________________
  
  
  //{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function

int sumElement(int arr[],int n)
{
    //Your code here
     int sum=0;

    for(int i=0;i<n;i++)

    {

        sum+=arr[i];

    }

    return sum;
}




//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends
