#include <stdio.h>
#include <stdlib.h>
int k,n,i,j=1,l;
int main() {
	printf("enter the no. of element you wnt to take in array\n");
	scanf("%d",&n);
	printf("enter the values of element in the array");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the index of element you wanna delete\n");
	scanf("%d",&j);
	for(k=j;k<n;k++)
	{
		a[k]=a[k+1];
	}
	n=n-1;
	for(l=0;l<n;l++)
	{
		printf("%d  ",a[l]);
	}
	return 0;
