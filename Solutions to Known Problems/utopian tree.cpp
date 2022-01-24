//https://www.hackerrank.com/challenges/utopian-tree

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int GetHeight (int n)
{
    int Val = 1;
    for (int i=1; i<=n; i++)
    {
        if (i % 2 == 0) Val++;
        else Val *= 2;
    }
    return Val;
}

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        cout << GetHeight(n) << endl;
    }
    return 0;
}