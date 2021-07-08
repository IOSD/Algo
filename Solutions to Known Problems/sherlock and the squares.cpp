//https://www.hackerrank.com/challenges/sherlock-and-squares

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        double sqa = sqrt(a);
        int sqia = (int)sqa;
        double sqb = sqrt(b);
        int sqib = (int)sqb;
        
        int ex = 0;
        if (sqa == sqia) ex++;
        
        cout << (sqib - sqia) + ex << endl;
    }
    return 0;
}
