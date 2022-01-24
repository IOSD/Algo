#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> n;
  
  //factors exist in pair,so traversing till sqrt(n) to reduce time complexity
  //Time Complexity: O(sqrt(n))
  //Space Complexity:O(1)

  for(i = 2; i*i<=n; i++)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
