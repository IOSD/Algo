//https://www.hackerrank.com/challenges/angry-children

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> l(n);
    for (int i=0; i<n; i++) cin >> l[i];
    
    sort(l.begin(), l.end());
    
    vector<int> res;
    
    int index = (k > 50000) ? (n-k)/2 : n-k;
    for(int i=0; i<=index; i++)
    {
        vector<int> temp(k);
        for (int j=0; j<k; j++) temp[j] = l[i+j];
        
        int max = temp[0];
        int min = temp[0];
        for (int j=0; j<k; j++)
        {
            if (temp[j] > max) max = temp[j];
            if (temp[j] < min) min = temp[j];
        }
        
        res.push_back(max - min);
    }
    
    int min = res[0];
    for (int j=0; j<res.size(); j++) if (res[j] < min) min = res[j];
    
    cout << min << endl;
    return 0;
}
