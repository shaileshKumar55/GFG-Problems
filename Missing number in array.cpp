   /*
   Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
Example 2:



Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
   */

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
         sort(array.begin() , array.end());

        for(int i = 0; i < n; i++)

        {

            if((i+1) != array[i])

                return i+1;         

        }
    }
};
