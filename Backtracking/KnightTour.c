// C program for Knight Tour problem using Backtracking 
#include<stdio.h>

// bool defination
typedef int bool;
#define true 1
#define false 0

#define N 8
 
int solveKnightTourUtil(int x, int y, int movei, int sol[N][N],
                int xMove[],  int yMove[]);
 
/* function to check if i,j are valid indexes
   for N*N chessboard */
bool isSafe(int x, int y, int sol[N][N])
{
    return ( x >= 0 && x < N && y >= 0 &&
             y < N && sol[x][y] == -1);
}
 
/*function to print solution matrix sol[N][N] */
void printSolution(int sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            printf(" %2d ", sol[x][y]);
        printf("\n");
    }
}
 
/* This function solves the Knight Tour problem using
   Backtracking */
bool solveKT()
{
    int sol[N][N];
 
    /* Initialization of solution matrix */
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;
 
    /* xMove[] and yMove[] define next move of Knight.
       xMove[] is for next value of x coordinate
       yMove[] is for next value of y coordinate */
    int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
 
    // Since the Knight is initially at the first block
    sol[0][0]  = 0;
 
    /* Start from 0,0 and explore all tours using
       solveKnightTourUtil() */
    if (solveKnightTourUtil(0, 0, 1, sol, xMove, yMove) == false)
    {
        printf("Solution does not exist");
        return false;
    }
    else
        printSolution(sol);
 
    return true;
}
 
/* A recursive utility function to solve Knight Tour
   problem */
int solveKnightTourUtil(int x, int y, int movei, int sol[N][N],
                int xMove[N], int yMove[N])
{
   int k, next_x, next_y;
   if (movei == N*N)
       return true;
 
   /* Try all next moves from the current coordinate x, y */
   for (k = 0; k < 8; k++)
   {
       next_x = x + xMove[k];
       next_y = y + yMove[k];
       if (isSafe(next_x, next_y, sol))
       {
         sol[next_x][next_y] = movei;
         if (solveKnightTourUtil(next_x, next_y, movei+1, sol,
                         xMove, yMove) == true)
             return true;
         else
             sol[next_x][next_y] = -1;// backtracking
       }
   }
 
   return false;
}

// Main function
int main()
{
    solveKT();
    return 0;
}