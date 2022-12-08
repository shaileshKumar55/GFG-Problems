/*
Example 1:

Input:
N = 2, M = 2
Output: 12 
Explanation: There are 12 ways we can place a black and a white Knight on this chessboard such that they cannot attack each other.


Example 2:

Input:
N = 2, M = 3
Output: 26
Explanation: There are 26 ways we can place a black and a white Knight on this chessboard such that they cannot attack each other.
*/

long long numOfWays(int N, int M)
{
    // write code here
     long long int mod = 1e9+7 ;
    long long int ans = 0 ;
    long long int a1 = 1 , a2 = 2 , a4 =4;
    ans+=(long long)(((N*M) -a1)*(N*M)) ;
    if(N >=2 && M>=3){
        ans-=(long long)((N-a1)*(a4)*(M-a2)) ;
    }
    if(N >=3 && M>=2){
        ans-= (long long)((N-a2)*(a4)*(M-a1)) ;
    }
    return (ans%mod) ;
}
