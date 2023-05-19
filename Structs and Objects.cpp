/*
CPP structs are more powerful than C structs as they are just classes with public data members. Here, we will create objects of a rectangle struct and find the maximum area of a rectangle. We have N rectangles out of which we have to find maximum area among all of them.

Example 1:

Input:
N = 4
9 8 
7 6 
5 4 
3 2
Output: 
72
Explanation:
We have N = 4, so 4 rectangle objects.
Obj1 (9,8), Obj2(7,6), Obj3(5,4), Obj4(3,2).
*/

*************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    Rectangle(){}
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    
};
int area(Rectangle r);
void maxArea(Rectangle arr[],int n);


// } Driver Code Ends
//User function Template for C++


int area(Rectangle r)
{
   //return length*breadth
    return r.length * r.breadth;
}


void maxArea(Rectangle arr[],int n)
{
     int res = 0;
    
    for (int i = 0; i < n; i++)
        res = max(res, area(arr[i]));
    
    cout << res << endl;
   
   //Your code here. Use area function to calculate area of a reactangle object
    cout<<endl;
}


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;//Number of rectangle objects
	    Rectangle arr[n]; //array of rectangle objects
	    for(int i=0;i<n;i++)
	    {
	        int l,b;
	        cin>>l>>b; //length and breadth of a object
	        Rectangle r(l,b); //creating a object r
	        arr[i]=r; //fill the array
	    }
	    maxArea(arr,n); //function to calculate maxArea
	}
	return 0;
}


// } Driver Code Ends
