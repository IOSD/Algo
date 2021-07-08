//https://www.hackerrank.com/challenges/picking-numbers

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++) cin >> a[a_i];
    
    sort(a.begin(), a.end());
    
    vector<int> Counts(0);
    int TempCount = 1;
    int TempInitIndex = 0;
    for (int i=1; i<n; i++)
    {
        if (a[i] - a[TempInitIndex] <= 1) TempCount++;
        else
        {
            Counts.push_back(TempCount);
            TempInitIndex = i;
            TempCount = 1;
        }
    }
    if (Counts.size() == 0) Counts.push_back(TempCount);
    
    sort(Counts.begin(), Counts.end());
    cout << Counts[Counts.size() - 1] << endl;
    return 0;
}