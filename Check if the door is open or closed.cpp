/*
Given N doors and N persons. The doors are numbered from 1 to N and persons are given id’s numbered from 1 to N. Each door can have only two statuses i.e. open (1) or closed (0) . Initially all the doors have status closed. Find the final status of all the doors, when all the persons have changed the status of the doors of which they are authorized. i.e. if status open then change the status to closed and vice versa. A person with id ‘i’ is authorized to change the status of door numbered ‘j’ if ‘j’ is a multiple of ‘i’.
Note: A person has to change the current status of all the doors for which he is authorized exactly once.

 

Example 1:

Input:
N = 3
Output:
1 0 0 
Explanation:
Initiall status of rooms - 0 0 0. 
Person with id 2 changes room 2 to open,
i.e. (0 1 0). Person with id 1 changes
room 1, 2, 3 status (1 0 1).
Person with id 3 changes room 3
status i.e. (1 0 0).


Example 2:

Input:
N = 2
Output:
1 0
Explanation:
Initiall status of rooms - 0 0. 
Person with id 2 changes room 2 to open,
i.e. (0 1). Person with id 1 changes
room 1, 2 status (1 0).
*/

**************************************************************************************************************

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int *checkDoorStatus(int N) {
        // code here
         int *a = new int[N];
      for(int i=1;i<=N;i++){
          int no=sqrt(i);
          if(no*no==i){
              a[i-1]=1;
          }
      }
      return a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        int* ptr = ob.checkDoorStatus(N);
        for(int i=0 ; i<N ; i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
