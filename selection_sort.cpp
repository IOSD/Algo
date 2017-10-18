// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include<iostream>

using namespace std;

void selectsort(int [], int);

int main()
{	
	int m[50],n,i;
	cout<<"Hom many Elements , you want to enter:\n";
	cin>>n;
	cout<<"\nEnter the elements:\n";
	for( i=0; i<n; i++ )
	{	
		cin>>m[i];
	}

	selectsort(m,n);
	cout<<"\nSorted Array:\n";
	for( i=0; i<n; i++)
	{	
		cout<<m[i]<<"\t";
	}
	return 0;
}

void selectsort(int p[], int size)
{
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



