#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, j, k, i;
        cin>>n;

    int arr[n];

    for( i = 0 ; i < n ; i++ )
        cin>>arr[i];

    for(; i >= 1 ; i--)
    {
        if((arr[i])<(arr[i-1]))
        {
            k = arr[i];
            arr[i]=arr[i-1];

            for( j = 0 ; j<n ; j++)
                cout<<arr[j]<<" ";

            arr[i-1]=k;


            cout<<"\n";
        }
    }

    for( j = 0 ; j<n ; j++)
                cout<<arr[j]<<" ";


    return 0;
}
