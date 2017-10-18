//Insertion Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

#include<climits>						//include climits header file to define value of INT_MIN

void insertsort( int pi[] , int sizei)
{{										//function for insertion sort, taking array and its size as arguments

	int temp,j;
	pi[0]=INT_MIN;						//assigning the valu of INT_MIN to first element of array

	for(int t=1; t<=sizei; t++)
	{       temp=pi[t];
		    j=t-1;

		while(temp<pi[j])				//checking condition of insertion sort
			{	pi[j+1]=pi[j];
				j--;
			}
		   pi[j+1]=temp;
	}
}

int main()
{   int m[50],n,i;
	cout<<"How many Elements , you want to enter:\n";
	cin>>n;								//no. of elements in array user want to enter
	cout<<"\nEnter the elements:\n";
	for( i=1 ; i<=n ; i++ )
	{	cin>>m[i];						//taking number as input from user

	}

	insertsort(m,n);					//call insertionsort function

	cout<<"\nSorted Array:\n";
	for( i=1 ; i<=n ; i++)
	{	cout<<m[i]<<"\t";				//display the sorted array

	}
	return 0;
}