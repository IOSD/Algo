//https://www.hackerrank.com/challenges/cut-the-sticks

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
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++) cin >> arr[arr_i];
    
    int min = arr[0];
    int max = arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    for ( ; ; )
    {
        int temp_min = 0;
        int count = 0;
        for (int j=0; j<n; j++)
        {
            if (arr[j] > 0)
            {
                arr[j] -= min;
                count++;
                if ((arr[j] < temp_min || temp_min == 0) && arr[j] > 0) temp_min = arr[j];
            }
        }
        if (count < 1) break;
        cout << count << endl;
        min = temp_min;
    }
    cout << endl;
    return 0;
}
