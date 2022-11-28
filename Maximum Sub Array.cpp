   /*
   Example 1:

Input:
n = 3
a[] = {1, 2, 3}
Output: 1 2 3
Explanation: In the given array every
element is non-negative.
   */

/*
Example 2:

Input:
n = 2
a[] = {-1, 2}
Output: 2
Explanation: The only subarray [2] is
the answer.
*/

class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    pair<int, int>p;
	    p.first = 0;
	    p.second = -1;
	    int i = 0;
	    int j = 0;
	    int maxi = 0;
	    int sum = 0;
	    while(j<n){
	        if(a[j]>=0){
	            sum += a[j++];
	        }
	        else{
	            if(maxi<sum){
	                maxi = sum;
	                p.first = i;
	                p.second = j-1;
	            }
	            sum = 0;
	            i = j+1;
	            j += 1;
	            }
	        }
	        if(maxi < sum){
	            maxi = sum;
	            p.first = i;
	            p.second = j-1;
	            
	        }
	        vector<int>ans;
	        for(int k=p.first; k<= p.second; k++){
	            ans.push_back(a[k]);
	        }
	        if(ans.empty()){
	            ans.push_back(-1);
	        }
	        return ans;
	    }
	
};
