#include<iostream>
using namespace std;
int main()
{
    for(int i=5;i>=1;i--) //loop for changing line and giving path for printing pattern format
    {
        for(int j=1;j<=i;j++)//loop for printing format upper part
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=5;i++)//loop for changing line and giving path for printing pattern format
    {
        for(int j=1;j<=i;j++)//loop for printing format upper part
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
