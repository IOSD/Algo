#include<iostream>
#include<cmath>
using namespace std;


void find_primes(bool sieve[], unsigned long long int size)
{
    // by definition 0 and 1 are not prime numbers
    sieve[0] = false;
    sieve[1] = false;

    // all numbers <= max are potential candidates for primes
    for (unsigned int i = 2; i <= size; ++i)
    {
        sieve[i] = true;
    }

    // loop through the first prime numbers < sqrt(max) (suggested by the algorithm)
    unsigned int first_prime = 2;
    for (unsigned int i = first_prime; i <= std::sqrt(double(size)); ++i)
    {
        // find multiples of primes till < max
        if (sieve[i] = true)
        {
            // mark as composite: i^2 + n * i
            for (unsigned int j = i * i; j <= size; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}
void print_primes(bool sieve[], unsigned long long int size)
{
    // all the indexes of the array marked as true are primes
    for (unsigned long long int i = 0; i <= size; ++i)
    {
        if (sieve[i] == true)
        {
            std::cout << i <<" ";
        }
    }
}
//TIME COMPLEXITY-O(nlog(log(n)))
//SPACE COMPLEXITY-O(n)

int main(){
unsigned long long int n;
cin>>n;
bool sieve[n];
find_primes(sieve,n);
print_primes(sieve,n);
return 0;
}
