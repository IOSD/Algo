#include<iostream.h>
#include<conio.h>

void bsort(int arr[],int n)
{
int i,j,temp;
for (i=0;i<n-1;i++)
{
	for (j=0;j<n-1-i;j++)
	{
		if (arr[j]>arr[j+1])
	       {	temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;}
	}
}
for (i=0;i<n;i++)
cout<<arr[i]<<"\t";
}

void ssort(int arr[],int n)
{
int i,j,small,pos;
for (i=0;i<n-1;i++)
{                          small=arr[i];pos=i;
	for (j=i+1;j<n;j++)
	{
		if (small>arr[j])
		{
			small=arr[j];
			pos=j;
		}
	}
	arr[pos]=arr[i];
	arr[i]=small; 
}
for (i=0;i<n;i++)
cout<<arr[i]<<"\t";

}

void isort(int arr[],int n)
{
int i,j,temp;
for (i=1;i<n;i++)
{
	temp=arr[i];
	j=i-1;
	while (temp<arr[j]&&j>=0)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}
for (i=0;i<n;i++)
cout<<arr[i]<<"\t";

}

void main()
{
clrscr();
const int n=10;
int arr[n],i;
int choice;
char ans;
do
{
cout<<"Enter elements:- "<<endl;
for (i=0;i<n;i++)
cin>>arr[i];

	cout<<"1-bubble sort\n2-selection sort\n3- insertion sort"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		bsort(arr,n);
		break;
		case 2:
		ssort(arr,n);
		break;
		case 3:
		isort(arr,n);
		break;
		default:
		cout<<"Wrong input"<<endl;
	}
	cout<<"Wish to continue?"<<endl;
	cin>>ans;
}
while(ans=='y');
getch();
}

