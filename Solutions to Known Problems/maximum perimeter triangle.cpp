//https://www.hackerrank.com/challenges/maximum-perimeter-triangle

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int i, int j) { return i > j; }

bool CheckTriangle (int a, int b, int c)
{
    if (a + b <= c || b + c <= a || c + a <= b) return false;
    else return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i=0; i<n; i++) cin >> s[i];
    
    sort(s.begin(), s.end(), cmp);
    for (int j=0; j<=n-3; j++)
    {        
        if (CheckTriangle(s[j], s[j+1], s[j+2]))
        {
            cout << s[j+2] << " " << s[j+1] << " " << s[j];
            break;
        }
        else if (j == n-3) cout << "-1";
    }
    
    return 0;
}
