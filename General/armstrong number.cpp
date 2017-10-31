#include<iostream>
#include<stdio.h>
  
using namespace std;


  void five_Add(int n)//function to find whether or not number is an armstrong
  { int temp_N=n;
  	int temp=0;
  
  	int sum=0;
  	while(n!=0)
{ 
	temp=n%10;
	
  int temp1= temp*temp*temp;
	sum+=temp1;
	n=n/10;

}
if (sum==temp_N)
    cout<<"The number is an armstrong number"<<endl;
    else 
      cout<<"The given number is not an Armstrong number"<<endl;
	
	cout<<sum;
  }

int main()
{


int a;

cout<<"Please enter a number"<<endl;
cin>>a;

five_Add(a);

cout<<endl;


return 0;




}




