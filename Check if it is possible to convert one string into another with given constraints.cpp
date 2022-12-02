/*
Example 1:

Input:
S=#A#B#B#   
T=A###B#B
Output:
1
Explanation:
A in S is right to the A in T 
so A of S can move easily towards
the left because there is no B on
its left positions and for first B 
in S is left to the B in T so B 
of T can move easily towards the 
right because there is no A on its
right positions and it is same for 
next B so S can be easily converted
into T.
Example 2:

Input:
S=#A#B# 
T=#B#A#
Output:
0
Explanation:
Here first A in S is left to the 
A in T and according to the condition,
A cant move towards right,so S cant 
be converted into T.
*/

class Solution {
  public:
    int isItPossible(string S, string T, int m, int n) {
        // code here
          if(m != n) 
          return 0;

        if(S[0]=='#' && T[0]=='B')
        
        return 0;

        if(S[m-1]=='#' && T[n-1]=='A')
        
        return 0;

        string s1 = "";

        string s2 = "";

        for(int i=0; i<m; i++) {

            if(S[i] != '#') s1+=S[i];

            if(T[i] != '#') s2+=T[i];

        }

        return s1 == s2;
    }
};
