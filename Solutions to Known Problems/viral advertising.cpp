//https://www.hackerrank.com/challenges/strange-advertising

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int PeopleOnDate (int d)
{
    int x = 5;
    int Likes = floor(x/2);
    for (int i=1; i<d; i++)
    {
        x = floor(x/2) * 3;
        Likes += floor(x/2);
    }
    return Likes;
}

int main()
{
    int d;
    cin >> d;
    cout << PeopleOnDate(d) << endl;
    return 0;
}