#include<stdio.h>
int main()
{
	int arr[11]={2,6,12,25,49,65,78,80,85,90,98},beg=0,end=10,loc,item,mid;
	printf("enter the item yuo want to search\n");
	scanf("%d",&item);
	mid=(beg+end)/2;
	while(beg<=end&&arr[mid]!=item)
	{ 
       if(item>arr[mid])
	   {
	    	beg=mid+1;
	   }
	   else
	   {
	   	    end=mid-1;
	   }
	   	mid=(beg+end)/2;
    }
       if(item==arr[mid])
	     {
		    loc=mid;
		    printf("item found at index=%d\n",loc);
	     } 
	     else
	     printf("item not found\n");
}
