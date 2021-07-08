//https://www.hackerrank.com/challenges/permutation-equation

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
    vector<int> nums(n+1);
    for (int i=1; i<=n; i++) cin >> nums[i];
    
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (nums[j] == i)
            {
                for (int k=1; k<=n; k++)
                    if (nums[k] == j) cout << k << endl;
            }
        }
    }
    
    return 0;
}
