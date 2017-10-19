#include<iostream>
using namespace std;

void Lsearch(int a[], int l , int n)
{
 int f=0,i=0;
 
 while (i<n && !f)
 {
  if (a[i]==l)
  f++;
  else
  i++;
 }
 if (f)
  cout<<"Data Found at :"<<i<<endl;
 else
 cout<<"Data Not Found in the array"<<endl;
}

int main()
{
 int a[100],n,l;
 cout<<"enter no. of elements";
 cin>>n;
 cout<<"enter the elements";
 for(int i=0; i<n; i++)
  cin>>a[i];
 cout<<"Enter data to be searched";
 cin>>l;
 Lsearch(a,l,n);
 return 0;
}
