#include<stdio.h>
#include<stdlib.h>
//divides the array and check for entered item
int rbs(int arr[],int item,int beg,int end)
{
	if(beg<=end)
	{
		int mid=(beg+end)/2;
		if(arr[mid]==item)
		{
		  return mid;
		}
	    if(arr[mid]>item)
	    return rbs(arr,item,beg,mid-1);
	    else
	    return rbs(arr,item,mid+1,end);
	    
	}
return -1;//returns -1 if item not found
}
//master function
int main()
{
	int arr[]={23,45,52,62,72,86,89,92,94,98},item,beg=0,end=9,c;
	printf("enter the item you want to search\n");
	scanf("%d",&item);
	c=rbs(arr,item,beg,end);
	if(c!=-1)
	printf("%d",c);
	else
	printf("item not found");
	return 0;
}
