#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


    // Complete this function


int main()
{
    int n, i;
    long int sum=0;
    scanf("%i", &n);
    long int arr[n];
    for( i = 0 ; i < n ; i++)
    {
    scanf("%ld", &arr[i]);
    sum = sum + arr[i];
    }
    printf("%ld", sum);
    }
