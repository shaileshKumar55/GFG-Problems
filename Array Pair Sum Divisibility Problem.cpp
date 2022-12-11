 /* 
 Example 1 :

Input : arr = [9, 5, 7, 3], k = 6
Output: True
Explanation: {(9, 3), (5, 7)} is a 
possible solution. 9 + 3 = 12 is divisible
by 6 and 7 + 5 = 12 is also divisible by 6.

Example 2:

Input : arr = [2, 4, 1, 3], k = 4
Output: False
Explanation: There is no possible solution.
 */


class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        <int,int>m;
        for(auto i:nums){
            m[i%k]++;
        }
        for(auto i:m){
            if(i.first==0 && i.second%2){
                return false;
            }
            if(i.first && i.second!=m[k-i.first]){
                return false;
            }
        }
        return true;
    }
};
