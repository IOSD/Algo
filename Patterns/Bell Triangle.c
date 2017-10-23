/*A Bell Triangle is a very special kind of triangle implemented using coding.
A Bell Triangle is as this one- 

1
1  2
2  3  5
5  7  10  15
15 20 27  37  52

The Bell Traingle is obtained by beginning the first row with 1 and beginning subsequent rows with last number of the previous row. 
Rows are filled out by adding the number in the preceding column to the number above it. Eg. in third row 2+(number above it i.e. 1)=3...The pattern follows on similarly
The C code for Bell Triangle is as follows:
----------------------------------------------------------------------------------------------------------------------------->

#include<stdio.h>
int main()
{
    int i,j,ch,k,n;   /*declaring the variables i,j.k as loop variables,n as the height of the Triangle,ch as array variabole*/
    int arr[100];     /*declaring an array of size 100*/
    int arr1[100];    /*declaring another array of size 100*/
    arr[0]=1;         /*storing 1 as the first element of array arr*/
    ch=1;
    printf("Enter the height of Bell Triangle");
    scanf("%d",&n);   /*inputting the height or the no. of rows to be printed of the Bel Traingle*/
    for(i=0;i<n;i++)   /* for changing rows*/
    {
        for(j=0;j<(i+1);j++)  /* for printing columns*/
        {
            if(j==0)      /* printing the first column variables where j==0 as the last printed value of previous row*/
            {
                printf("%d \t",ch);
                arr1[j]=ch; /*storing the row values in an array*/
            }
            else
            {
                ch=ch+arr[j-1];  /*adding the values of a row to the value at the same index but of the previous row stored in arr*/
                printf("%d \t",ch); /* printing the added values*/
                arr1[j]=ch;         /*storing the value of the new row in the array arr1*/
            }
        }
        for(k=0;k<j;k++)      /*copying arr1 into arr*/
        {
            arr[k]=arr1[k];
        }
    printf("\n");               /* chnging the line after printing one row*/
}//i loop closed
return 0;
}//method closed
