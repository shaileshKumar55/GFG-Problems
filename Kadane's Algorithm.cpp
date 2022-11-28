   /*
   Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
   */
   

    /*
    Example 2:

Input:
N = 4
Arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)
    */


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
             int sum=0;

        int max_ele=arr[0];

        for(int i=0;i<n;i++)

        {

            // sum

            sum=sum+arr[i];

            // update

            max_ele=max(max_ele,sum);

            // check

            if(sum<0)

            sum=0;

        }

        // return

        return max_ele;
        
    }
};
