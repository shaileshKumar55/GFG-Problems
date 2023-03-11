/*
Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
Example 2:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is 
the majority element.
*/



*****************************************************************************************************************************

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        
        // your code here
         

        int count = 1;

        int no = arr[0];

 

        for(int i=1;i<n;i++)

        {

            if(arr[i] == no)

            {

                count++;

            }

            else if(arr[i] != no)

            {

                count--;

            }

            if(count == 0)

            {

                no = arr[i];

                count++;

            }

                

        }

        int no_count = 0;

        for(int i=0;i<n;i++)

        {

            if(arr[i]==no)

                no_count++;

        }

        

        if(no_count > (n/2))

            return no;

            

        else

            return -1;
        
    }
};
