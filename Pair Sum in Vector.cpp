/*
Pairs and vectors can be used together to achieve some amazing results. Here we will learn to use a vector that holds pairs.
You are given a vector V of size n. The vector hold pair of integers. Example V={(1,2),(3,4)...}. Now, you need to sum the second elements.

Example 1:

Input:
N = 5
vector -> {(1, 2), (3, 4), (5, 6), 
                     (7, 8), (9, 10)}
Output: 
30
*/
************************************************************************************************************************************
//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sum(vector<pair<int,int>>v);


// } Driver Code Ends
//User function Template for C++

/*the function contains vector of pairs*/
//Complete this function to print the sum
void sum(vector<pair<int,int>>v)
{
   long long sum=0;
    for(auto x:v)
    {
        sum=sum+x.second;
    }
    cout<<sum;
    cout<<endl;
}

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<pair<int,int>>v; //Making a vector that holds pairs
	    for(int i=0;i<n;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        v.push_back(make_pair(x,y)); //Pushing a pair in the vector
	    } 
	    
	   sum(v); //The sum function
	   
	}
	return 0;
}

// } Driver Code Ends
