// C program to solve N Queen Problem using backtracking
// Size of the board
   #define N 5
   #include<stdio.h>


   typedef int bool;
   #define true 1
   #define false 0

   // function to print solution 
   void printSolution(int board[N][N])
   {
       for (int i = 0; i < N; i++)
       {
           for (int j = 0; j < N; j++)
               printf("%d ", board[i][j]);
           printf("\n");
       }
   }
    
   // function to check if a queen can be placed on board[row][col]. 
   bool isSafe(int board[N][N], int row, int col)
   {
       int i, j;
    
       // Check this row on left side 
       for (i = 0; i < col; i++)
           if (board[row][i])
               return false;
    
       // Check upper diagonal on left side 
       for (i=row, j=col; i>=0 && j>=0; i--, j--)
           if (board[i][j])
               return false;
    
       // Check lower diagonal on left side
       for (i=row, j=col; j>=0 && i<N; i++, j--)
           if (board[i][j])
               return false;
    
       return true;
   }
    
   // A recursive function to solve NQueen problem
   bool solveNQueens(int board[N][N], int col)
   {
       // base case
       if (col >= N)
           return true;

       for (int i = 0; i < N; i++)
       {
           // Check if queen can be placed on board[i][col]
           if ( isSafe(board, i, col) )
           {
               // Place this queen in board[i][col]
               board[i][col] = 1;
    
               // recur
               if ( solveNQueens(board, col + 1) )
                   return true;

               board[i][col] = 0; // BACKTRACK
           }
       }
       return false;
   }
        
   int main()
   {

        int board[N][N] = { 
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
        };

        if ( solveNQueens(board, 0) == false )
        {
            printf("Solution doesn't exist\n");
        }

        printSolution(board);
       return 0;
   }