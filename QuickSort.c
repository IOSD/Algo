#include <stdio.h>
int swap(int &x,int &y);
int Partition(int *a,int start,int end)
{
	int pivot=a[end];
	int pIndex=start;
	for(int i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
		 swap(a[i],a[pIndex]);
		 pIndex++;
		}
	
	}
	swap(a[pIndex],a[end]);
	return pIndex;	
}
int swap(int &x,int &y)
		{
			int t;
			t=x;
			x=y;
			y=t;
		}
void Quicksort(int *a,int start,int end)
{
	if(start<end)
	{
		int pIndex=Partition(a,start,end);
		Quicksort(a,start,pIndex-1);
	    Quicksort(a,pIndex+1,end);    
	}
	
}

int main()
{
	int a[]={1,4,2,67,43,35,5};
	Quicksort(a,0,6);
	printf("The sorted array is:");
	int i;
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
}
