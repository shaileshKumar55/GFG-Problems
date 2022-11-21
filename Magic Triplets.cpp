          // EXAMPLE 1
/*Input: arr = [3, 2, 1]
Output: 0
Explanation: There is no magic triplet. */

       // EXAMPLE 2
/*Input: arr = [1, 2, 3, 4]
Output: 4
Explanation: Fours magic triplets are 
(1, 2, 3), (1, 2, 4), (1, 3, 4) and 
(2, 3, 4).*/


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

