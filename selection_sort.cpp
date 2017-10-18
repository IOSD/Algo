//Selection Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

void selectsort(int p[], int size) 
{										//function for selection sort, taking array and its size as arguments
	int min,pos,temp;
	for(int t=0; t<(size-1); t++)
	{	min=p[t];
		pos=t;

		for( int j=t+1; j<size; j++)
		{
			if(p[j]<min)
			{	
				min=p[j];
				pos=j;
			}
			
		}

		temp=p[t];			
		p[t]=p[pos];
		p[pos]=temp;
	}
}

int main()
{	
	int m[50],n,i;
	cout<<"Hom many Elements , you want to enter:\n";
	cin>>n;								//no. of elements in array user want to enter
	cout<<"\nEnter the elements:\n";
	for( i=0; i<n; i++ )
	{	
		cin>>m[i];						//taking number as input from user
	}

	selectsort(m,n);					//call selectsort function
	cout<<"\nSorted Array:\n";
	for( i=0; i<n; i++)							
	{	
		cout<<m[i]<<"\t";				//display the sorted array
	}
	return 0;
}




