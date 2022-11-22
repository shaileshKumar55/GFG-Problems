
     // Example  1
     
 /* 
Input: n = 2
Output: 3 
Explanation: The distinct numbers you can have are 
just 1 and 2 and their sum is equal to 3.
*/

 // Example  2
 /*
 Input: n = 5
Output: 6
Explanation: The distinct numbers you can have 
are just 1 and 5 and their sum is equal to 6.
 */

class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        // code here
        long long sum = 0 ; 
        for(int i = 1; i<= sqrt(n); i++){
            if(n%i==0){
                sum = sum + i;
                if(n/i!=i){
                    sum = sum + n/i;
                }
            }
        }
        return sum;
        
    }
};
