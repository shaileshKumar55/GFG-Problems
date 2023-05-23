/*
Bitwise operations help us in a lot of problems. We can find the non-repeating element in an array, find number of set-bits, do division, find subsets and so on. Indeed, we can see that learning to cleverly use bitwise operations is vital to any programmer.

You are given an array A of size N. You need to do the following:

You need to xor the elements of the arrays with their respective indices(index starting from 0).
After step1, print the array.
Now, set all the elements of A to zero.
Now, print A.
Hint: Use memset function to complete the step 3.

Example:

Input:
N = 10
A[] = 1 2 3 4 5 6 7 8 9 10
Output:
1 3 1 7 1 3 1 15 1 3
0 0 0 0 0 0 0 0 0 0
Explanation:
First we take xor of every element with
their indices, like 1xor0, 2xor1, 3xor2, 
4xor3 and so on.
Now print the resultant array
Now set all the elements of array to zero
Now print the resultant array
*/
**********************************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void printArr(int arr[],int n)
    {
        //Your code for printing array here
          for(int i = 0; i < n; i++) cout << arr[i] << " ";
        
        cout<<endl;
    }
    
    void setToZero(int arr[],int n)
    {
       //Use memset to set arr to zero
       {memset (arr, 0, n * sizeof (int));}
    }
    
    void xor1ToN(int arr[], int n)
    {
       //Xor arr[i]^i
       {for (int i = 0; i < n; i++) arr[i] ^= i;}
    }
};


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
	    {
	        cin>>arr[i];
	    }
	    Solution obj;
	    obj.xor1ToN(arr,n);
	    obj.printArr(arr,n);
	    obj.setToZero(arr,n);
	    obj.printArr(arr,n);
	}
	return 0;
}


// } Driver Code Ends
