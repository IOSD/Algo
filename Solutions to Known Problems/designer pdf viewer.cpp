#include <iostream>
#include <vector>

typedef unsigned long long intgr;

using namespace std;
void insrt(vector<int> & fact,int number, int index)
{
    int temp=number;
    while(temp!=0)
    {
        fact[index]=temp%10;
        temp=temp/10;
        index++;
    }

    return;
}
void print(vector<int> fact)
{
    int flag=0;
    for(int i=199;i>=0;i--)
    {
        if(flag==0)
        {
            if(fact[i]!=0)
                flag=1;
        }
        if (flag==1)
        cout<<fact[i];
    }
}


int main()
{
    int n;
    cin>>n;
    vector <int> fact (200);
    vector <int> carry (200);

    for (int i=0;i<200;i++)
    {
        fact[i]=0;
        carry[i]=0;
    }

    insrt(fact,n,0);

    for (int i=n-1;i>0;i--)
    {

        for(int j=0;j<200;j++)
        {

            carry[j+1]=((fact[j]*i)+carry[j])/10;
            fact[j]=((fact[j]*i)+carry[j])%10;



        }
    }
    print(fact);

    return 0;

}
