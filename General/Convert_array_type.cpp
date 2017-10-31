#include<iostream>

using namespace std;


#include<math.h>
void TwoDtoOneD(int [][100],int);
void OneDtoTwoD(int [],int);
int main()
{
	int size,ch,j,i,k=0,A[100][100],B[100];
	
	cout<<"\n1. Conversion of 2D Array to 1D\n";
	cout<<"\n2. Conversion of 1D Array to 2D\n";
	cout<<"\nEnter your Choice: \n";
	cin>>ch;
	switch(ch)
	{
		case 1:

			cout<<"Enter the size of 2D array"<<endl;
			cin>>size;
			cout<<"\nEnter the 2D array:\n";
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
						cin>>A[i][j];
				}
			}
			TwoDtoOneD(A,size);
			break;

		case 2:

			cout<<"Enter the size of 1D array"<<endl;
			cin>>size;
			cout<<"\nEnter One D Array\n";
			for(i=0;i<size;i++)
			{
				cin>>B[i];
			}
			OneDtoTwoD(B,size);
			break;
		default:
			cout<<"Wrong Input";
	}
	
}
void TwoDtoOneD(int B[][100],int size)
{
	int A[100],i,j,k=0;
		for (i=0; i<size;i++)
		{
			for (j=0; j<size;j++)
			{
				 A[k]=B[i][j];
				 k++;
			}
		}
	cout<<"\nNew 1D Array: \n";
	for(k=0; k<size*size; k++)
		cout <<A[k]<<"\n";
}
void OneDtoTwoD(int B[],int size)
{
	int A[100][100],j,k=0;
	int s=sqrt(size);
	if(pow(s,2)==size)
	{
	cout<<"Conversion possible"<<endl;

	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
				A[i][j]=B[k];
				k++;
		}
	}
	cout<<"\nContents of converted 2D Array\n";
	for (int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	}
	else
	{
	cout<<"conversion is not possible"<<endl;
	}
  
  }
