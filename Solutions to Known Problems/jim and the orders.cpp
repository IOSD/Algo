//https://www.hackerrank.com/challenges/jim-and-the-orders

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    int n;
    cin >> n;
    vector<pii> orders(n);
    for (int i=0; i<n; i++)
    {
        int t;
        int d;
        cin >> t >> d;
        orders[i] = make_pair(t+d, i+1);
    }
    
    sort(orders.begin(), orders.end());
    
    for (int i=0; i<n; i++) cout << orders[i].second << " ";
    
    return 0;
}
