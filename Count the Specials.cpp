/*
Given an array A (may contain duplicates) of N elements and a positive integer K. The task is to count the number of elements that occurs exactly floor(N/K) times in the array.

Example:

Input:N = 5 K = 2 
A[] = 1 4 1 2 4
Output:2
Explanation:In the given array, 1 and 4 occurs floor(5/2) = 2 times.
So count is 2.
*/
***************************************************************************************************************************************************



//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// Function Prototype
int countSpecials(int[], int, int);


// } Driver Code Ends
//User function Template for C++

/*Function to count number of elements with occurrence
* exactly equal to floor(sizeof_array/K)
* arr : input array
* sizeof_array : number of array elements
*/
int countSpecials(int arr[], int sizeof_array, int K){
    
    int f = floor(sizeof_array/K), count = 0;
    
    
    // Your code here
     int a[1001] = {0};
    for(int i=0; i<sizeof_array; i++){
        a[arr[i]]++;
    }
    for(int j=0; j<1001; j++){
        if(a[j]==f){
            count++;
        }
    }
    
    
    
    return count;
    
}

//{ Driver Code Starts.

// Driver code to rest countSpecials function
int main() {
	
	// Testcase input
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    
	    // sizeof_array : number of array elements
	    // K : as given in statement
	    int sizeof_array, K;
	    cin >> sizeof_array >> K;
	    
	    // array of size sizeof_array
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
	    
	    // calling function and printing count the occurrence
	    cout << countSpecials(arr, sizeof_array, K) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
