/*
Classes and objects are one of the most important part of C++.
Here we will learn to use classes and objects and we'll swap the values of two objects. We'll provide name, number, and height for two objects.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains values for object1. The second line contains values for object2.

Output Format:
For each testcase, in a new line, print the required output (see example).

Your Task:
Since this is a function problem, you do not need take any input our output . Just complete the provided function  swapper(Person **obj1, Person **obj2)  that is a friend function of class Person. Just swap values of obj1 and obj2.

Constraints:
1 <= T <= 100
1<= |name| <= 100
1 <= number <= 99999
1 <= height <= 10

Example:
Input:
1
Morty 1234 6
Rick 5678 5
Output:
Morty 1234 6
Rick 5678 5
Rick 5678 5
Morty 1234 6

Explanation:
Testcase1: First we print the original values of obj1 and obj2 in two lines. The next two lines contain swapped values of obj1 and obj2.
*/

***********************************************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

class Person
{
    string name;
    int number;
    int height;
    public:
    Person(){}
    Person(string iname,int inumber, int iheight)
    {
        name = iname;
        number = inumber;
        height = iheight;
    }
    
    void display()
    {
        cout<<name<<" "<<number<<" "<<height<<endl;
    }
    
    void friend swapper(Person **obj1, Person **obj2);
    
};




int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string name1;
	    int number1, height1;
	    cin>>name1;
	    cin>>number1;
	    cin>>height1;
	    
	    string name2;
	    int number2, height2;
	    cin>>name2;
	    cin>>number2;
	    cin>>height2;
	    
	    
	    
	    Person *p1 = new Person(name1, number1, height1);
	    Person *p2 = new Person(name2, number2, height2);
	    p1->display();
	    p2->display();
	    swapper(&p1, &p2);
	    p1->display();
	    p2->display();
	}
	return 0;
}


// } Driver Code Ends
//User function Template for C++

// Function to swap two objects **obj1 and **obj2
void swapper(Person **obj1, Person **obj2)
{
    //Your code here
    swap(*obj1, *obj2);
   
}


//{ Driver Code Starts.

// } Driver Code Ends
