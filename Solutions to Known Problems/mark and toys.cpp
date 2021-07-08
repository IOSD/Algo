//https://www.hackerrank.com/challenges/mark-and-toys

#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <int> prices, int k)
{
    sort(prices.begin(), prices.end());
    int count = 0;
    for (int i=0; ;i++)
    {
        k -= prices[i];
        if (k >= 0) count++;
        else break;
    }
    return count;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++) cin >> prices[prices_i];
    
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}