#include<iostream>
using namespace std;
///program to merge two arrays
///time complexity= O(n)
///space complexity = O(1) extra space


/* Merges array N[] of size n into array mPlusN[]
   of size m+n*/
int merge(int mPlusN[], int N[], int m, int n)
{
  int i = n;  /* Current index of i/p part of mPlusN[]*/
  int j = 0; /* Current index of N[]*/
  int k = 0; /* Current index of of output mPlusN[]*/
  while (k < (m+n))
  {
    /* Take an element from mPlusN[] if
       a) value of the picked element is smaller and we have
          not reached end of it
       b) We have reached end of N[] */
    if ((i < (m+n) && mPlusN[i] <= N[j]) || (j == n))
    {
      mPlusN[k] = mPlusN[i];
      k++;
      i++;
    }
    else  // Otherwise take element from N[]
    {
      mPlusN[k] = N[j];
      k++;
      j++;
    }
  }
}
int main()

{
   /* Initialize arrays */
  int mPlusN[] = {2, 8,NA,NA,NA, 13,NA, 15, 20};
  int N[] = {5, 7, 9, 25};
  int n = sizeof(N)/sizeof(N[0]);
  int m = sizeof(mPlusN)/sizeof(mPlusN[0]) - n;


  /*Merge N[] into mPlusN[] */
  merge(mPlusN, N, m, n);

  /* Print the resultant mPlusN */

  for(int i=0;i<(m+n);i++)
    cout<<mPlusN[i]<<endl;

  return 0;
}
