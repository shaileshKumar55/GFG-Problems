/*
Given a 2D binary matrix A(0-based index) of dimensions NxM. Find the minimum number of steps required to reach from (0,0) to (X, Y).
Note: You can only move left, right, up and down, and only through cells that contain 1.

Example 1:

Input:
N=3, M=4
A=[[1,0,0,0], 
   [1,1,0,1],
   [0,1,1,1]]
X=2, Y=3 
Output:
5
Explanation:
The shortest path is as follows:
(0,0)->(1,0)->(1,1)->(2,1)->(2,2)->(2,3).
Example 2:

Input:
N=3, M=4
A=[[1,1,1,1],
   [0,0,0,1],
   [0,0,0,1]]
X=0, Y=3
Output:
3
Explanation:
The shortest path is as follows:
(0,0)->(0,1)->(0,2)->(0,3).
*/

*******************************************************************************************************************************************

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
             if(A[0][0]==0 || A[X][Y]==0)
        return -1;
        pair<int, int> movement[4]={{1,0}, {0, 1}, {-1, 0}, {0, -1}};
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {0, 0}});
        vector<vector<int>> visited(N, vector<int>(M, 0));
        visited[0][0]=1;
        int steps=N*M;
        while(!q.empty())
        {
            int step=q.front().first;
            pair<int, int> temp=q.front().second;
            q.pop();
            if(temp.first==X && temp.second==Y)
                {
                    return step;
                }
                for(int k=0; k<4; k++)
                {
                    int i=temp.first+movement[k].first;
                    int j=temp.second+movement[k].second;
                    if(i<N && i>=0 && j<M && j>=0 && visited[i][j]==0 && A[i][j]==1)
                    {
                        q.push({step+1, {i, j}});
                        visited[i][j]=1;
                    }
                }
        }
        return -1;
        //return steps==N*M?-1:steps;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends
