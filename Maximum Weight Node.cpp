/*
Given a maze with N cells. Each cell may have multiple entry points but not more than one exit (i.e entry/exit points are unidirectional doors like valves).
You are given an array Edge[] of N integers, where Edge[i] contains the cell index that can be reached from cell i in one step. Edge[i] is -1 if the ith cell doesn't have an exit. 
The task is to find the cell with maximum weight (The weight of a cell is the sum of cell indexes of all cells pointing to that cell). If there are multiple cells with the maximum weight return the cell with highest index.

Note: The cells are indexed with an integer value from 0 to N-1. If there is no cell pointing to the ith cell then the weight of the i'th cell is zero.

Example 1:

Input:
N = 4
Edge[] = {2, 0, -1, 2}
Output: 2
Explanation: 
1 -> 0 -> 2 <- 3
weight of 0th cell = 1
weight of 1st cell = 0 
(because there is no cell pointing to the 1st cell)
weight of 2nd cell = 0+3 = 3
weight of 3rd cell = 0
There is only one cell which has maximum weight
(i.e 2) So, cell 2 is the output.
Example 2:

Input:
N = 1
Edge[] = {-1}
Output: 0
Explanation:
weight of 0th cell is 0.
There is only one cell so 
cell 0 has maximum weight.

*/
*************************************************************************************************************************************************


//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
       int arr[N]={0};
      int ans=0;
      int index=-1;
      for(int i=0;i<N;i++){
          if(Edge[i]==-1){
             i++;
          }
          arr[Edge[i]]+=i;
          if(ans<arr[Edge[i]]){
              ans=arr[Edge[i]];
              index= Edge[i];
          }
          else if(ans==arr[Edge[i]]&& index<Edge[i]){
              index=Edge[i];
          }
          
      }
      return index;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends
