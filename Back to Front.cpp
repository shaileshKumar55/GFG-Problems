/*
Given a vector of N positive integers. Your task is to print the vector elements in reverse order.

Example 1:

Input:
N = 5
vector -> 1 2 3 4 5
Output: 
5 4 3 2 1
*/
****************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*Function to print vector in reverse order
* using iterator
* it1 : v.rbegin(), reverse iterator
* it2 : v.rend(), reverse iterator
*/
void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){
    
    // Your code here
     while(it1<it2){
        cout<<*it1<<" ";
        it1++;
    }
    
    
    cout<<endl;
    
}


//{ Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector
	    vector<int> v;
	    
	    // Taking input to vector
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // Calling function
	    reverseIterator(v.rbegin(), v.rend());
	    
	}
	
	return 0;
}
// } Driver Code Ends
