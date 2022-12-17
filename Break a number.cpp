/*
Example 1:

Input:
N = 2
Output:
6
Explanation:
Possible ways to break the number:
0 + 0 + 2 = 2 
0 + 2 + 0 = 2
2 + 0 + 0 = 2
0 + 1 + 1 = 2
1 + 1 + 0 = 2
1 + 0 + 1 = 2
 

 

Example 2:

Input:
N = 3
Output:
10
Explanation:
Possible ways to break the number:
0+0+3 = 3
0+3+0 = 3
3+0+0 = 3
0+1+2 = 3
0+2+1 = 3
1+0+2 = 3
1+2+0 = 3
2+0+1 = 3
2+1+0 = 3
1+1+1 = 3

*/



class Solution{   
public:
    int waysToBreakNumber(int N){
        // code here 
         long long res=N+1;

        return (((res*(res+1))/2)%1000000007);
    }
};
