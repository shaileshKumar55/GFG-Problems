/*

Given a binary matrix of dimensions  with R rows and C columns. Start from cell(0, 0), moving in the right direction. Perform the following operations: 

If the value of matrix[i][j] is 0, then traverse in the same direction and check the next value.
If the value of matrix[i][j] is 1, then update matrix[i][j] to 0 and change the current direction clockwise. ie - up, right, down, or left directions change to right, down, left, and up respectively.
Find the index of the cell where you will be forced to exit the matrix while performing the given traversal. 

example : 
Input: 
matrix[][] = {{0, 1, 1, 1, 0},
                   {1, 0, 1, 0, 1},
              {1, 1, 1, 0, 0}}
R=3
C=5

Output: (2,0)
Explanation: We will leave the grid after visiting the index (2,0).
*/

*************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
          vector<pair<int, int>>dir = {{0, 1},{1, 0},{0, -1},{-1, 0}};
        int dInd = 0;
        int r = 0;
        int c = 0;
        while(r >= 0 && r < R && c >= 0 && c < C){
            if(matrix[r][c] == 1){
                dInd = (dInd+1)%4;
                matrix[r][c] = 0;
            }
            r += dir[dInd].first;
            c += dir[dInd].second;
        }
        return {r - dir[dInd].first, c - dir[dInd].second};
        
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends
