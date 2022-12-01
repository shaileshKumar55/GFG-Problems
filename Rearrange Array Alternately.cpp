 /*
 
 Example 1:

Input:
n = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
n = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.
 
 */

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    int l=0, r=n-1, mx = arr[n-1]+100;
    	for(int i=0; i<n; ++i) {
    	    if(i%2==0) arr[i] += (arr[r--]%mx)*mx;
    	    else arr[i] += (arr[l++]%mx)*mx;
    	}
    	for(int i=0; i<n; ++i) arr[i]/=mx;
    	 
    }
};
