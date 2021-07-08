//https://www.hackerrank.com/challenges/bomber-man

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int R,C,N;
    cin >> R >> C >> N;
    vector<vector<char>> Field(R,vector<char>(C));

    for(int y=0;y<R;y++)
        for(int x=0;x<C;x++) cin >> Field[y][x];

    if (N>1)
    {
        if (N > 2) N = (N - 2) % 4;
        else N = 0;

        if (N == 0) N = 4;

        if (N > 0) N++;

        vector<vector<char>> TempField = Field;
        for (int i=0; i<N; i++)
        {
            if ((i+1) % 2 == 0)
            {
                for(int y=0;y<R;y++)
                {
                    for(int x=0;x<C;x++)
                    {                    
                        if (TempField[y][x] == 'O')
                        {
                            Field[y][x] = '.';

                            if(x+1 < C) Field[y][x+1] = '.';
                            if(x > 0) Field[y][x-1] = '.';
                            if(y > 0) Field[y-1][x] = '.';
                            if(y+1 < R) Field[y+1][x] = '.';
                        }
                    }
                }

                TempField = Field;
            }
            else
            {
                for(int y=0;y<R;y++)
                    for(int x=0;x<C;x++) if (Field[y][x] == '.') Field[y][x] = 'O';
            }     
        }
    }

    for(int y=0;y<R;y++)
    {
        for(int x=0;x<C;x++) cout << Field[y][x];
        cout << endl;
    }

    return 0;
}