/*
Example 1:

Input:
N = 4, K = 3
arr[] = {1, 2, 3, 4}
Output: 4
Explanation:
Optimal Split is {1, 2}, {3}, {4}.
Maximum sum of all subarrays is 4,
which is minimum possible for 3 splits. 


Example 2:

Input:
N = 3, K = 2
A[] = {1, 1, 2}
Output:
2
Explanation:
Splitting the array as {1,1} and {2} is optimal.
This results in a maximum sum subarray of 2.
*/

class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int totalSum =0,mx=INT_MIN;
        for(int i=0;i<N;i++) {
            totalSum+=arr[i];
            mx = max(mx,arr[i]);
        }
        
        int lo=mx,hi=totalSum,ans=INT_MAX;
        while(lo<=hi) {
            int mid = lo+(hi-lo)/2;
            if(isValid(arr,mid,K,N)) {
                ans=min(ans,mid);
                hi=mid-1;   // To minimize our answer
            } else {
                lo=mid+1;   // To get Valid Range
            }
        }
        return ans;
    }
    // to check if requiredSum is possible to get by splitting array in k or less then k subarray
    bool isValid(int arr[],int requiredSum,int k,int n) {
        int sum=0,count=1;
        for(int i=0;i<n;i++) {
            if(sum+arr[i]<=requiredSum) {
                sum+=arr[i];
            } else {
                sum=arr[i];
                count++;
            }
        }
        return count<=k;
    }
};
