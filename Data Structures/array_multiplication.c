#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1[3][3],a2[3][3],i,j,a3[3][3],a4[3][3],k;
    printf("enter elements of array 1\n");
    for(i=0;i<3;i++)
      {
	      for(j=0;j<3;j++)
	    {
		   scanf("%d",&a1[i][j]);
	    }
      }
    printf("enter elements of array 2\n");
    for(i=0;i<3;i++)
      {
	      for(j=0;j<3;j++)
	    {
		scanf("%d",&a2[i][j]);
    	}
      }
    for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	  {
		  a3[i][j]=0;
		  for(k=0;k<3;k++)
		{
			a3[i][j]+=a1[i][k]*a2[k][j];
		}
	}
}
printf("matrix 1=\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	printf("%d\t",a1[i][j]);
	printf("\n\n");
}
printf("matrix 2=\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	printf("%d\t",a2[i][j]);
	printf("\n\n");
}
printf("matrix1*matrix2=\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	printf("%d\t",a3[i][j]);
	printf("\n\n");
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		a4[i][j]=a1[i][j]+a2[i][j];
	}
}
printf("matrix1+matrix2=\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	printf("%d\t",a4[i][j]);
	printf("\n");
}
}
