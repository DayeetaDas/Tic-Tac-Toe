/* This is the Tic Tac Toe Game player vs player*/
#include "pch.h"
#include<iostream>
using namespace std;
char board[3][3] = { '0','1','2','3','4','5','6','7','8' };//initialising the board positions
char X = 'X';
char O = 'O';
char player = X;
void draw_board()//drawing the board
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
void instructions()//displays the instructions
{
	cout << "WELCOME TO THE TIC TAC TOE GAME.\nThis game has a board as such";
	void draw_board();
	cout << "The positions of the elemnts are as follows:" << endl << "00 01 02" << endl << "10 11 12" << endl << "20 21 22" << endl;
	cout << "Player 1 will be taking 'X' and player 2 will be taking 'O'" << endl;
	cout << "All The Best!" << endl;
}
void input()//takes input from the player and places the move on the board 
{
	int a = 0, b = 0;
	cout << "Enter the row where u want to place the move:";
	cin >> a;
	cout << "Enter the column where u want to place the move:";
	cin >> b;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[a][b] = player;
		}
	}
}
void Toggle_player()//toggles between X and O
{
	if (player == 'X')
		player = 'O';
	else if (player == 'O')
		player = 'X';
}
char win()//checks the winning player
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
			return '/';
		}
	}
}
int main()//main function
{
	int n = 0;
	instructions();
	draw_board();
	while (1)
	{
		n++;
		input();
		draw_board();
		if (win() == player)
		{
			cout << player << " wins!";
			break;
		}
		if (win() == '/' && n == 9)
		{
			cout << "It's a draw!";
			break;
		}
		Toggle_player();
	}
	return 0;
}