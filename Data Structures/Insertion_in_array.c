#include<stdio.h>
int main()
{
	int n=7;
	int arr[n];
	int i,ele,loc;
	printf("Make your 7 element array\n");
	for(i=0;i<=6;i++)
		scanf("%d",&arr[i]);
	printf("Enter an extra element to insert between\n ");
	scanf("%d",&ele);
	printf("Enter the location for this element\n");
	scanf("%d",&loc);
	for(i=n-1;i>=loc-1;i--)
		arr[i+1]=arr[i];
	arr[loc-1]=ele;
	printf("Your new array is\n");
	for(i=0;i<=7;i++)
		printf("%d ",arr[i]);
	return 0;
	
}
