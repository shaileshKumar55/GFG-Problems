   /*
   Example 1:

Input:
N = 8
Output: 3
Explanation:
Binary representation of 8 : 1000
So the integers less than 8 with 
same number of set bits are : 4, 2, 1
Hence, the result is 3.  
   */

   /*  
   Example 2:

Input:
N = 4
Output: 2
Explanation:
Binary representation of 4 : 100
So the integers less than 4 with 
same number of set bits are : 2, 1
So, The result is 2.
   */




class Solution{
public:
long long nck(long long n, long long k){
if(n == 0 || n < k) return 0;
long long res = 1;
if (k > n - k)
k = n - k;
for (int i = 0; i < k; ++i) {
res *= (n - i);
res /= (i + 1);
}

return res;
}
    
    long long count(long long x) {
        // Code Here
        long long r = 0;
int number_of_set_bits = 0;
for(int i = 0; i < 64;++i){
if(x & 1){
number_of_set_bits++;
long long nck_r = nck(i,number_of_set_bits);
//printf("nck_r=%d,n=%d,k=%d\n",nck_r,i,number_of_set_bits);
r += nck_r;
//printf("r=%d\n",r);
}
x = x >> 1;
}
return r;
    }
};
