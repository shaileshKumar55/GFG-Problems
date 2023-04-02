/*
Given an array of N integers. Find the first element that occurs at least K number of times.
 

Example 1:

Input :
N = 7, K = 2
A[] = {1, 7, 4, 3, 4, 8, 7}
Output :
4
Explanation:
Both 7 and 4 occur 2 times. 
But 4 is first that occurs 2 times
As at index = 4, 4 has occurred 
atleast 2 times whereas at index = 6,
7 has occurred atleast 2 times.
 
*/

_____________________________________________________________________________________________________________________________
  
  
  //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>visited;
        for(int i=0;i<n;i++){
           visited[a[i]]++;
            if(visited[a[i]]==k)
                return a[i];
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
