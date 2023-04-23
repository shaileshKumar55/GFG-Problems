/*
Iterators are used to iterate over vectors, maps, sets etc. Here we will learn to iterate over a vector from begin to end.
You are given a vector V of size n. You need to print its elements.

Example 1:

Input:
N = 5
vector -> 1 2 3 4 5
Output: 
1 2 3 4 5
*/

*****************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void iter(vector<int>::iterator it1,vector<int>::iterator it2);


// } Driver Code Ends
//User function Template for C++

//Complete this function. it1 points to vector.begin(), it2 points to vector.end()
void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
      while(it1<it2)

    {

    cout<<(*it1)<<" ";

    it1++;

    }
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
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    iter(v.begin(),v.end()); //passing begin and end addresses of vector to the function
	   
	}
	return 0;
}


// } Driver Code Ends
