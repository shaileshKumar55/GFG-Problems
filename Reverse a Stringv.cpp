/*
Example 1:

Input:
s = Geeks
Output: skeeG


Example 2:

Input:
s = for
Output: rof
*/
**********************************************************************************************

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  int i = 0;
  int  n = str.length()-1;
  while(i<n){
      swap(str[i], str[n]);
      i++;
      n--;
  }
  return str;
   
}

