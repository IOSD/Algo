#include<bits/stdc++.h>
using namespace std;

int A,B,C;

int gcd(int a, int b)
{
    if (b==0) return a;
    else return gcd(b,a%b);
}

int d,x,y;
void extended_Euclid(int a,int b)
{
    if (b==0)
    {
        d = a;
        x = C;
        y = 0;
    }
    else
    {
        extended_Euclid(b,a%b);
        int temp = x;
        x = y;
        y = temp - ( (a/b)*y );
    }
}

int main()
{
    cout<<"Equation is of the form : ax + by = c"<<endl;
    cout<<"Enter coeff of x "; cin>>A;
    cout<<"Enter coeff of y "; cin>>B;
    cout<<"Enter c "; cin>>C;

    int hcf = gcd(A,B);

    if ( C % hcf != 0 )
    {
        cout<<"Integral solution not possible"; 
        return 0;
    }
    A = A/hcf; B = B/hcf; C = C/hcf;
    extended_Euclid(A,B);

    cout<<"Solution to the equation is -> x : "<<x<<" y : "<<y<<endl;
    return 0;
}