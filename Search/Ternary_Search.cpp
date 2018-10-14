#include <iostream>
#include <cmath>

using namespace std;

int TernarySearch(int L[], int left, int right, int key)
{
    if (right - left > 0)
    {
        // calculate first pivot
        int midFirst = left + (right - left) / 3;

        // calculate second pivot
        int midSecond = midFirst + (right - left) / 3;

        // Does first pivot has the key
        if (L[midFirst] == key)
            return midFirst;

        // Does second pivot has the key
        if (L[midSecond] == key)
            return midSecond;

        // find next segment where search moves
        if (L[midFirst] > key)
            return TernarySearch(L, left, midFirst, key);

        if (L[midSecond] < key)
            return TernarySearch(L, midSecond + 1, right, key);

        return TernarySearch(L, midFirst, midSecond, key);
    }
    else
        return -1; // Not Found
}

int main()
{
    int L[] = {0, 1, 2, 3, 4, 5, 8, 13, 21, 34, 55};
    int left = 0;
    int right = sizeof(L) / sizeof(L[0]);

    int key;
    cin >> key;

    int x;
    if ((x = TernarySearch(L, left, right, key)) == -1)
        cout << "Key doesn't exist" << endl;
    else
        cout << "The position of Key is " << x << endl;

    return 0;
}
