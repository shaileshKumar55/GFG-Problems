   /*
   Example 1:

Input:
A = "1101", B = "111"
Output: 10100
Explanation:
 1101
+ 111
10100
   */

   /* 
   Example 2:

Input: 
A = "10", B = "01"
Output: 11
Explanation: 
  10
+ 01
  11
   */



class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	        string ans = "";
	    int i = A.size() - 1 , j = B.size() - 1;
	    bool carry = 0;
	    while(i>=0 || j>=0)
	    {
	        int sum = 0;
	        if(i>=0 && A[i] =='1')
	        sum ++;
	        if(j>=0 && B[j] =='1')
	        sum ++;
	        
	        if(sum + carry == 3)
	        {
	            ans += '1';
	            carry = 1;
	        }
	        else if(sum + carry == 2)
	        {
	            ans += '0';
	            carry = 1;
	        }
	        else if(sum + carry == 1)
	        {
	            ans += '1';
	            carry = 0;
	        }
	        else 
	        {
	            ans += '0';
	            carry = 0;
	        }
	        i--;
	        j--;
	    }
	    if(carry ==1){
	        ans += to_string(carry);
	    }
	    reverse(ans.begin(), ans.end());
	    i = 0;
	    while(ans[i] == '0')
	    {
	        ans.erase(0, 1);
	    }
	    return ans;
	}
};
