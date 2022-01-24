#include<stdio.h>
int main()
{
int arr[]={2,4,6,7,8,9},item;
int beg=0,end=5;
int mid=(beg+end)/2;
printf("Enter the item to search\n");
scanf("%d",&item);
while(beg<=end&&arr[mid]!=item)
{
if(item<arr[mid])
  end=mid-1;
  else
   beg=mid+1;
   mid=(beg+end)/2;}
   if(item==arr[mid])
   printf("item found at %d index",mid);
   else
   printf("item not found");
}
