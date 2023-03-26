/*

Example 1:

Input:
q = 1

query[0] = 6
Output:
1
Explanation:
There is only one number 4 which has
exactly three divisors 1, 2 and 4 and
less than equal to 6.


Example 2:

Input:
q = 2
query[0] = 6
query[1] = 10
Output:
1
2
Explanation:
For query 1 it is covered in the
example 1.
query 2: There are two numbers 4 and 9
having exactly 3 divisors and less than
equal to 10.
*/

class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
         vector<int> ans;
        for(int j=0;j<q;j++){
            int count=0;
            for(long long i=4;i<=query[j];i++){
                long long s=sqrt(i);
                if(i==s*s && i%2!=0){
                    bool flag=1;
                    for(long long k=3;k<sqrt(i);k+=2){
                        if(i%k==0) flag=0;
                    }
                    if(flag) count++;
                }
                else if(i==4) count++;
            }
            ans.emplace_back(count);
        }
        return ans;
    }
};
