/* This is the Tic Tac Toe Game human vs computer(beatable)*/
#include "pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
using namespace std;
char board[3][3] = { '1','2','3','4','5','6','7','8','9' };//initialising the elements of the board
int position[3][3] = { 1,2,3,4,5,6,7,8,9 };//stores the positions on the board
int i = 0, j = 0, pos = 0, cpos = 0;
char X = 'X';
char O = 'O';
char ask = ' ', player = ' ', computer = ' ';
void positions()//displays the positions on the board
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
void ask_user()//ask user if he/she wants to take the X or not
{
	cout << "Would you like to take X?(y/n)" << endl;
	cin >> ask;
	if (ask == 'y')
	{
		player = X;
		computer = O;
	}
	else if (ask == 'n')
	{
		player = O;
		computer = X;
	}
}
void user_input()//asks the user for the position where he/she wants to place the move
{
	if (ask != 'y' && ask != 'n')
		ask_user();
	cout << "Enter the position where you would like to place your move:" << endl;
	cin >> pos;
}
void user_move()//places the move of the user on the game board
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (position[i][j] == pos && position[i][j] != 0)
			{
				board[i][j] = player;
				position[i][j] = 0;
			}
			else if (position[i][j] == pos && position[i][j] == 0)
			{
				user_input();
			}
		}
	}
}
void computer_input()//takes the input from the computer
{
	srand(time(NULL));
	cpos = rand() % 7 + 2;
}
void computer_move()//places the computer's move on the board
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (position[i][j] == cpos && position[i][j] != 0)
			{
				board[i][j] = computer;
				position[i][j] = 0;
			}
			else if (position[i][j] == cpos && position[i][j] == 0)
			{
				computer_input();
			}
		}
	}
}
void draw_board()//draws the final board after the moves
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
char win()//checks for the winner
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == player && board[i + 1][j] == player && board[i + 2][j] == player)
				return player;
			if (board[i][j] == player && board[i][j + 1] == player && board[i][j + 2] == player)
				return player;
			if (board[i][j] == player && board[i + 1][j + 1] == player && board[i + 2][j + 2] == player)
				return player;
			if (board[i][j + 2] == player && board[i + 1][j + 1] == player && board[i + 2][j] == player)
				return player;

			if (board[i][j] == computer && board[i + 1][j] == computer && board[i + 2][j] == computer)
				return computer;
			if (board[i][j] == computer && board[i][j + 1] == computer && board[i][j + 2] == computer)
				return computer;
			if (board[i][j] == computer && board[i + 1][j + 1] == computer && board[i + 2][j + 2] == computer)
				return computer;
			if (board[i][j + 2] == computer && board[i + 1][j + 1] == computer && board[i + 2][j] == computer)
				return computer;

			return '/';
		}
	}
}
int main()//main function
{
	int c = 0;
	positions();
	ask_user();
	while (1)
		{
			c++;
			user_input();
			user_move();
			computer_input();
			computer_move();
			draw_board();
			if (win() == player)
			{
				cout << player << " wins" << endl;
				break;
			}
			else if (win() == computer)
			{
				cout << computer << "wins" << endl;
				break;
			}
			if (win() == '/' && c == 9)
			{
				cout << "It is a draw!" << endl;
				break;
			}
		}
	return 0;
}