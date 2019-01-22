#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, j;
    cin>>n;
     int a[n], b[100];

    for( i = 0 ; i < 100 ; i++ )
    {
        b[i] = 0;
    }
    for(i = 0 ; i < n ; i++ )
    {
        cin>>a[i];
        for(j = 0 ; j < 100 ; j++)
        {
            if(a[i]== j)
                b[j]++;
        }

    }

    for( i = 0 ; i < 100 ; i++ )
    {
        cout<<b[i]<<" ";
    }


    return 0;
}
