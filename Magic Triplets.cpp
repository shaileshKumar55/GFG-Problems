#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>arr){
	    // Code here.
	    int n = arr.size(); 
	    int ans = 0;
	      for(int i = 1; i < n - 1; i++)
	    {
	        int low = i - 1, high = i + 1;
	        int countLess = 0, countMore = 0;
	         while(low >= 0)
	        {
	            if(arr[low] < arr[i])
	            {
	                countLess++;
	            }
	            
	            low--;
	        }
	         while(high < n)
	        {
	             if(arr[high] > arr[i])
	            {
	                countMore++;
	            }
	            
	            high++;
	        }
	        ans += (countLess * countMore);
	    }
	     return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
