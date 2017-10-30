#include <iostream>
#include <windows.h>

using namespace std;

//If game is playing, it won't if player terminated it or has won
bool Playing = true;

//Initial x & y position of player
int x = 1;
int y = 8;
//Maze information . is for obstacle nothing is for walkable path & > is for goal
char Map[10][20] = 
{
	{'.','.','.','.', '.', '.', '.', '.', '.', '.','.','.','.', '.', '.', '.', '.', '.'},
	{'.',' ',' ',' ', '.', ' ', ' ', ' ',' ','.',' ', ' ', ' ', ' ', ' ', ' ', ' ', '.'},
	{'.','.','.',' ', '.', ' ', ' ', '.','.','.','.', '.', ' ', ' ', ' ', ' ', ' ', '.'},
	{'.',' ',' ',' ', ' ', '.', '.', ' ',' ',' ',' ', ' ', ' ', ' ', '.', ' ', ' ', '.'},
	{'.',' ',' ','.', '.', '.', '.', ' ',' ',' ',' ', '.', '.', '.', '.', '.', ' ', '.'},
	{'.',' ',' ','.', ' ', ' ', '.', ' ',' ',' ',' ', ' ', ' ', '.', ' ', '.', ' ', '.'},
	{'.',' ',' ','.', ' ', ' ', '.', '.',' ',' ','.', '.', '.', '.', ' ', '.', ' ', '.'},
	{'.',' ','.','.', ' ', ' ', ' ', ' ',' ','.','.', ' ', ' ', '.', '.', '.', ' ', '.'},
	{'.',' ',' ',' ', ' ', ' ', ' ', '.',' ',' ','.', ' ', ' ', ' ', ' ', ' ', ' ', '>'},
	{'.','.','.','.', '.', '.', '.', '.', '.', '.','.','.','.', '.', '.', '.', '.', '.'}
};

void GameWon ()
{
	//Stop playing since player won and print that he won
	Playing = false;
	cout << "\n\n\n";
	cout << "A WINNER IS YOU :)";
}

void Refresh ()
{
	//Give 100 line spacing for refreshing
	cout << string( 100, '\n' );
	cout << "Use arrow key to move around & Esc to quit" << Map[y][x] << "\n";
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<20; j++)
		{
			if (i == y && j == x) cout << '*';
			else cout << Map[i][j];
		}
		cout << "\n";
	}
	if (Map[y][x] == '>') GameWon();
}

bool Pressed1 = false;
bool Pressed2 = false;
bool Pressed3 = false;
bool Pressed4 = false;
int main ()
{
	//Refresh in starting
	Refresh();
	//While game is playing
	while(Playing)
	{
		//If escape is pressed stop playing
		if(GetKeyState(VK_ESCAPE) < 0) Playing = false;

		//If up button pressed check if there isn't any obstacle if no then change y pos and refresh
		if(GetKeyState(VK_UP) < 0)
		{
			if (Map[y-1][x] != '.' && !Pressed1)
			{
				y--;
				Refresh();
			}
			Pressed1 = true;
		}
		else Pressed1 = false;

		//If down button pressed check if there isn't any obstacle if no then change y pos and refresh
		if(GetKeyState(VK_DOWN) < 0)
		{
			if (Map[y+1][x] != '.' && !Pressed2)
			{
				y++;
				Refresh();
			}
			Pressed2 = true;
		}
		else Pressed2 = false;

		//If left button pressed check if there isn't any obstacle if no then change x pos and refresh
		if(GetKeyState(VK_LEFT) < 0)
		{
			if (Map[y][x-1] != '.' && !Pressed3)
			{
				x--;
				Refresh();
			}
			Pressed3 = true;
		}
		else Pressed3 = false;

		//If right button pressed check if there isn't any obstacle if no then change x pos and refresh
		if(GetKeyState(VK_RIGHT) < 0)
		{
			if (Map[y][x+1] != '.' && !Pressed4)
			{
				x++;
				Refresh();
			}
			Pressed4 = true;
		}
		else Pressed4 = false;
	}
	
	return(0);
}