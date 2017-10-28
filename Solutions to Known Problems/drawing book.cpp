//https://www.hackerrank.com/challenges/drawing-book

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int solve(int n, int p)
{
    int Page = floor(p/2);
    int PageLim = floor(n/2);
    return min((Page - 0), (PageLim - Page));
}

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}