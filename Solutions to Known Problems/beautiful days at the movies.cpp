//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    
    int Count = 0;
    for (i; i <=j; i++)
    {
        string str_i = to_string(i);
        reverse(str_i.begin(),str_i.end());
       
        int num = abs(i - stoi(str_i));
        if (num % k == 0) Count++;
    }
    
    cout<<Count<<endl;
    return 0;
}