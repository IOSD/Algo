//https://www.hackerrank.com/challenges/greedy-florist

#include <bits/stdc++.h>

using namespace std;

bool cmp (int a, int b) { return a > b; }
int getMinimumCost(int n, int k, vector < int > c)
{
    sort(c.begin(), c.end(), cmp);
    
    int i = 1;
    int price = 0;
    for ( ; i<=n; i++)
    {
        if (i <= k) price += c[i-1];
        else price += (ceil((i-k)/(double)k)+1)*c[i-1];
    }
    
    return price;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++) cin >> c[c_i];
    int minimumCost = getMinimumCost(n, k, c);
    cout << minimumCost << endl;
    return 0;
}
