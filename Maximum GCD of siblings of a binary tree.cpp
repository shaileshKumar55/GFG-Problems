/*
Given a 2d list that represents the nodes of a Binary tree with N nodes, the task is to find the maximum GCD of the siblings of this tree without actually constructing it.
Note: If there are no pairs of siblings in the given tree, print 0. Also, if given that there's an edge between a and b in the form of {a,b} in the list, then a is the parent node.


Example 1:

Input:
N = 7
arr = {{4, 5}, {4, 2}, {2, 3}, {2, 1}, {3, 6}, {3, 12}}
Output:
6
Explanation:

For the above tree, the maximum GCD
for the sibilings is 6, formed for the
nodes 6 and 12 for the children of node 3.
Example 2:
Input:
N = 3
arr[] = {{1,2}, {1,4}} 
Output :
2
Explanation:

For the above tree, the maximum GCD
for the sibilings is 2, formed for the
nodes 2 and 4 for the children of node 1.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        // code here
         unordered_map<int,vector<int>> mp;
        for(int i = 0; i<arr.size() ; i++){
            mp[arr[i][0]].push_back(arr[i][1]);
        }
        
        int maxi = 0;
        for(auto it: mp){
            if(it.second.size() > 1){
                maxi = max(__gcd(it.second[0],it.second[1]) , maxi);
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,u,v;
        cin>>N;
        
        vector<vector<int>> arr;
        
        for(int i=0; i<N-1; i++)
        {
            cin>>u>>v;
            vector<int> edge;
            edge.push_back(u);
            edge.push_back(v);
            arr.push_back(edge);
        }

        Solution ob;
        cout << ob.maxBinTreeGCD(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
