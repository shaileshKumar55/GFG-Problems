/*    Example 1:

Input: nums = [1, 2, 5, 3, 2]
Output: 5
Explanation: The sequence {1, 2, 5} is
increasing and the sequence {3, 2} is 
decreasing so merging both we will get 
length 5. 
* /


    /* 
    Example 2:

Input: nums = [1, 11, 2, 10, 4, 5, 2, 1]
Output: 6
Explanation: The bitonic sequence 
{1, 2, 10, 4, 2, 1} has length 6.
    */



class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	     int n = nums.size();
	    vector<int> dp1(n, 1);
	    vector<int> dp2(n, 0);
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < i; j++){
	            if(nums[j] < nums[i]){
	                dp1[i] = max(dp1[i], dp1[j] + 1);
	            }
	        }
	    }
	    int ans = 0;
	    for(int i = n - 1; i >= 0; i--){
	        for(int j = n - 1; j > i; j--){
	            if(nums[j] < nums[i]){
	                dp2[i] = max(dp2[i], dp2[j] + 1);
	            }
	        }
	        ans = max(ans, dp1[i] + dp2[i]);
	    }
	    return ans;
	}
};
