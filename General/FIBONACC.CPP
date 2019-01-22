#include<iostream.h>
#include<conio.h>
void main()
	{
	clrscr();
	int n,a=1,b=1,c;
	cout<<"Enter the Number of Terms\n";
	cin>>n;
	cout<<endl;
	cout<<"Your series is\n";
	cout<<a<<endl<<a<<endl;
	for (int i=0; i<n-2; i++)
		{
		c=a;
		a=b;
		b=c+a;
		cout<<b<<endl;
		}
	}


