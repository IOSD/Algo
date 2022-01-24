#include <stdio.h>
#include <stdlib.h>
int k,n,i,j=1,l,x;
int main() {
	printf("enter the no. of element you wnt to take in array\n");
	scanf("%d",&n);
	printf("enter the values of element in the array");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the index of element you wanna insert\n");
	scanf("%d",&j);
	printf("enter the value at the index");
	scanf("%d",&x);
	for(k=n-1;k>=j;k--)
	{
		a[k+1]=a[k];
	}
	a[j]=x;
	n=n+1;
	for(l=0;l<n;l++)
	{
		printf("%d  ",a[l]);
	}
	
	main();
}
