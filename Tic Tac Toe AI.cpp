#include "pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstdio>
using namespace std;
int crp = 0, cp = 0;
int pc = 0;
bool playerturn;
int gamewin = 0;
char one = '1', two = '2', three = '3', four = '4', five = '5', six = '6', seven = '7', eight = '8', nine = '9';
int tf;
int computer_win()
{
	if (one == 'O'&& two == 'O' && three == 'O' && playerturn == false)
		gamewin = 2;
	if (four == 'O' && five == 'O' && six == 'O' && playerturn == false)
		gamewin = 2;
	if (seven == 'O' && eight == 'O' && nine == 'O' && playerturn == false)
		gamewin == 2;
	if (one == 'O' && four == 'O' && seven == 'O' && playerturn == false)
		gamewin = 2;
	if (two == 'O' && five == 'O' && eight == 'O' && playerturn == false)
		gamewin = 2;
	if (three == 'O' && six == 'O' && nine == 'O' && playerturn == false)
		gamewin = 2;
	if (one == 'O' && five == 'O' && nine == 'O' && playerturn == false)
		gamewin = 2;
	if (three == 'O' && five == 'O' && seven == 'O' && playerturn == false)
		gamewin = 2;
	return gamewin;
}
int player_win()
{
	if (one == 'X'&& two == 'X' && three == 'X' && playerturn == false)
		gamewin = 2;
	if (four == 'X' && five == 'X' && six == 'X' && playerturn == false)
		gamewin = 2;
	if (seven == 'X' && eight == 'X' && nine == 'X' && playerturn == false)
		gamewin == 2;
	if (one == 'X' && four == 'X' && seven == 'X' && playerturn == false)
		gamewin = 2;
	if (two == 'X' && five == 'X' && eight == 'X' && playerturn == false)
		gamewin = 2;
	if (three == 'X' && six == 'X' && nine == 'X' && playerturn == false)
		gamewin = 2;
	if (one == 'X' && five == 'X' && nine == 'X' && playerturn == false)
		gamewin = 2;
	if (three == 'X' && five == 'X' && seven == 'X' && playerturn == false)
		gamewin = 2;
	return gamewin;
}
int computerAI() //work on computerAI part where the computer tries to win before countering.
{
	playerturn == false;

	if (one == 'O' && two == 'O' && playerturn == false && three == '3') //1 - 2 = 3 win
	{
		three = 'O';
		playerturn = true;
	}

	if (four == 'O' && five == 'O' && playerturn == false && six == '6') //4 - 5 = 6 win
	{
		six = 'O';
		playerturn = true;
	}

	if (seven == 'O' && eight == 'O' && playerturn == false && nine == '9') //7 - 8 = 9 win
	{
		nine = 'O';
		playerturn = true;
	}

	if (one == 'O' && four == 'O' && playerturn == false && seven == '7') //1 - 4 = 7 win
	{
		seven = 'O';
		playerturn = true;
	}

	if (two == 'O' && five == 'O' && playerturn == false && eight == '8') //2 - 5 = 8 win
	{
		eight = 'O';
		playerturn = true;
	}

	if (three == 'O' && six == 'O' && playerturn == false && nine == '9') //3 - 6 = 9 win
	{
		nine = 'O';
		playerturn = true;
	}

	if (one == 'O' && five == 'O' && playerturn == false && nine == '9') //1 - 5 = 9 win
	{
		nine = 'O';
		playerturn = true;
	}

	if (three == 'O' && five == 'O' && playerturn == false && seven == '7') //3 - 5 = 7 win
	{
		seven = 'O';
		playerturn == true;
	}

	if ((pc == 1 || pc == 5 || pc == 9) && playerturn == false)
	{
		if ((one == 'X' && five == 'X') && playerturn == false && nine == '9') //1 - 5 = 9 diagonal
		{
			nine = 'O';
			playerturn = true;
		}

		if ((one == 'X' && nine == 'X') && playerturn == false && five == '5') //1 - 9 = 5 diagonal
		{
			five = 'O';
			playerturn = true;
		}

		if ((five == 'X' && nine == 'X') && playerturn == false && one == '1') //5 - 9 = 1 diagonal
		{
			one = 'O';
			playerturn = true;
		}
	}

	if ((pc == 3 || pc == 5 || pc == 7) && playerturn == false)
	{
		if ((seven == 'X' && five == 'X') && playerturn == false && three == '3') //7 - 5 = 3 diagonal
		{
			three = 'O';
			playerturn = true;
		}

		if ((seven == 'X' && three == 'X') && playerturn == false && five == '5') //7 - 3 = 5 diagonal
		{
			five = 'O';
			playerturn = true;
		}

		if ((five == 'X' && three == 'X') && playerturn == false && seven == '7') //5 - 3 = 7 diagonal
		{
			seven = 'O';
			playerturn = true;
		}
	}

	if ((pc == 1 || pc == 2 || pc == 3) && playerturn == false)
	{
		if ((one == 'X' && two == 'X') && playerturn == false && three == '3') // 1 - 2 = 3 horizontal
		{
			three = 'O';
			playerturn = true;
		}

		if ((one == 'X' && three == 'X') && playerturn == false && two == '2') //1 - 3 = 2 horizontal
		{
			two = 'O';
			playerturn = true;
		}

		if ((two == 'X' && three == 'X') && playerturn == false && one == '1') //2 - 3 = 1 horizontal
		{
			one = 'O';
			playerturn = true;
		}
	}

	if ((pc == 4 || pc == 5 || pc == 6) && playerturn == false)
	{
		if ((four == 'X' && five == 'X') && playerturn == false && six == '6') //4 - 5 = 6 horizontal line 2
		{
			six = 'O';
			playerturn = true;
		}

		if ((four == 'X' && six == 'X') && playerturn == false && five == '5') //4 - 6  = 5 horizontal line 2
		{
			five = 'O';
			playerturn = true;
		}

		if ((five == 'X' && six == 'X') && playerturn == false && four == '4') //5 - 6 = 4 horizontal line 2
		{
			four = 'O';
			playerturn = true;
		}
	}

	if ((pc == 7 || pc == 8 || pc == 9) && playerturn == false)
	{
		if ((seven == 'X' && eight == 'X') && playerturn == false && nine == '9') //7 - 8 = 9 horizontal line 3
		{
			nine = 'O';
			playerturn = true;
		}

		if ((seven == 'X' && nine == 'X') && playerturn == false && eight == '8') //7 - 9 = 8 horizontal line 3
		{
			eight = 'O';
			playerturn = true;
		}

		if ((eight == 'X' && nine == 'X') && playerturn == false && seven == '7') //8 - 9 = 7 horizontal line 3
		{
			seven = 'O';
			playerturn = true;
		}
	}

	if ((pc == 1 || pc == 4 || pc == 7) && playerturn == false)
	{
		if ((one == 'X' && four == 'X') && playerturn == false && seven == '7') //1 - 4 = 7 vertical row 1
		{
			seven = 'O';
			playerturn = true;
		}

		if ((one == 'X' && seven == 'X') && playerturn == false && four == '4') //1 - 7 = 4 vertical row 1
		{
			four = 'O';
			playerturn = true;
		}

		if ((four == 'X' && seven == 'X') && playerturn == false && one == '1') //4 - 7 = 1 vertical row 1
		{
			one = 'O';
			playerturn = true;
		}

	}

	if ((pc == 2 || pc == 5 || pc == 8) && playerturn == false)
	{
		if ((two == 'X' && five == 'X') && playerturn == false && eight == '8') //2 - 5 = 8 vertical row 2
		{
			eight = 'O';
			playerturn = true;
		}

		if ((two == 'X' && eight == 'X') && playerturn == false && five == '5') //2 - 8 = 5 vertical row 2
		{
			five = 'O';
			playerturn = true;
		}

		if ((five == 'X' && eight == 'X') && playerturn == false && two == '2') //5 - 8 = 2 vertical row 2
		{
			two = 'O';
			playerturn = true;
		}
	}

	if ((pc == 3 || pc == 6 || pc == 9) && playerturn == false)
	{
		if ((three == 'X' && six == 'X') && playerturn == false && nine == '9') //3 - 6 = 9 vertical row 3
		{
			nine = 'O';
			playerturn = true;
		}

		if ((three == 'X' && nine == 'X') && playerturn == false && six == '6') //3 - 9 = 6 vertical row 3
		{
			six = 'O';
			playerturn = true;
		}

		if ((six == 'X' && nine == 'X') && playerturn == false && three == '3') //6 - 9 = 3 vertical row 3
		{
			three = 'O';
			playerturn = true;
		}
	}
	else
	{
		do
		{
			if (one == '1' && playerturn == false)
			{
				playerturn = true;
				one = 'O';
			}
			if (two == '2' && playerturn == false)
			{
				playerturn = true;
				two = 'O';
			}
			if (three == '3' && playerturn == false)
			{
				playerturn = true;
				three = 'O';
			}
			if (four == '4' && playerturn == false)
			{
				playerturn = true;
				four = 'O';
			}
			if (five == '5' && playerturn == false)
			{
				playerturn = true;
				five = 'O';
			}
			if (six == '6' && playerturn == false)
			{
				playerturn = true;
				six = 'O';
			}
			if (seven == '7' && playerturn == false)
			{
				playerturn = true;
				seven = 'O';
			}
			if (eight == '8' && playerturn == false)
			{
				playerturn = true;
				eight = 'O';
			}
			if (nine == '9' && playerturn == false)
			{
				playerturn = true;
				nine = 'O';
			}
		} while (playerturn = false);
	}
	return 0;
}

int checkPlayerInput()
{
	if (pc == 1 && one == '1')
		one = 'X';
	if (pc == 2 && two == '2')
		two = 'X';
	if (pc == 3 && three == '3')
		three = 'X';
	if (pc == 4 && four == '4')
		four = 'X';
	if (pc == 5 && five == '5')
		five = 'X';
	if (pc == 6 && six == '6')
		six = 'X';
	if (pc == 7 && seven == '7')
		seven = 'X';
	if (pc == 8 && eight == '8')
		eight = 'X';
	if (pc == 9 && nine == '9')
		nine = 'X';
return 0;
}
int checkComputerInput()
{
	if (cp == 1 && one == '1')
		one = 'O';
	if (cp == 2 && two == '2')
		two = 'O';
	if (cp == 3 && three == '3')
		three = 'O';
	if (cp == 4 && four == '4')
		four = 'O';
	if (cp == 5 && five == '5')
		five = 'O';
	if (cp == 6 && six == '6')
		six = 'O';
	if (cp == 7 && seven == '7')
		seven = 'O';
	if (cp == 8 && eight == '8')
		eight = 'O';
	if (cp == 9 && nine == '9')
		nine = 'O';

	return 0;
}
void gameBoard()
{
	cout << "+-----+-----+-----+" << endl;
	cout << "|  " << one << "  |  " << two << "  |  " << three << "  |" << endl;
	cout << "+-----+-----+-----+" << endl;
	cout << "|  " << four << "  |  " << five << "  |  " << six << "  |" << endl;
	cout << "+-----+-----+-----+" << endl;
	cout << "|  " << seven << "  |  " << eight << "  |  " << nine << "  |\n";
	cout << "+-----+-----+-----+" << endl;
}
int checkTie()
{
	if (one != '1' && two != '2' && three != '3' && four != '4' && five != '5' && six != '6' && seven != '7' && eight != '8' && nine != '9')
	{
		cout << "It's a tie!" << endl;
		gamewin = 0;
	}
	//Check on this line since it doesnt work..
	return gamewin;
}
int main()
{
	srand(time(0));
	int playAgain;
	int playerScore = 0;
	int computerScore = 0;
	int ties = 0;
	do
	{
		system("CLS");
		tf = rand() % (2 - 1 + 1) + 1;
		crp = rand() % (9 - 1 + 1) + 1;
		gamewin = 3;
		one = '1';
		two = '2';
		three = '3';
		four = '4';
		five = '5';
		six = '6';
		seven = '7';
		eight = '8';
		nine = '9';
		cout << "Welcome to Tic Tac Toe!" << endl << endl;
		cout << "Player: " << playerScore << " Computer: " << computerScore << " Ties: " << ties << endl;
		if (tf == 1)
		{
			cout << "Please choose a grid to place (X): " << endl << endl;
			gameBoard();//Gameboard for tic tac toe
			while (!(cin >> pc)) //error traps letters and words
			{
				cout << endl;
				cout << "Numbers only." << endl;
				cin.clear();
				cin.ignore(10000, '\n');
			}
			checkPlayerInput();
			system("CLS");
			gameBoard();
			playerturn = false;
		}
		if (tf == 2)
		{
			crp;
			cp = crp;
			checkComputerInput();
			cout << "The computer is choosing...\n" << endl;
			playerturn = true;
			gameBoard();
		}
		do
		{
			if (playerturn == true) 
			{
				cout << "Please choose a grid to place (X): " << endl << endl;
				while (!(cin >> pc))
				{
					cout << endl;
					cout << "Numbers only." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
				checkPlayerInput();
				player_win();
				checkTie();
				playerturn = false;
			}

			if (playerturn == false) //computer loop
			{
				computerAI();
				system("CLS");
				gameBoard();
				computer_win();
				checkTie();
				playerturn = true;
			}

		} while (gamewin > 2);

		if (gamewin == 0)
		{
			cout << "The game is a Tie!" << endl;
			++ties;
		}


		if (gamewin == 1)
		{
			cout << "The player wins!" << endl;
			++playerScore;
		}

		if (gamewin == 2)
		{
			cout << "The computer wins!" << endl;
			++computerScore;
		}


		cout << "Player: " << playerScore << " " << "Computer: " << computerScore << " Ties: " << ties << endl;


		cout << "Play again?\n1. Yes\n2. No\n" << endl;

		while (!(cin >> playAgain)) //error traps letters and words
		{
			cout << endl;
			cout << "Play again?\n1. Yes\n2. No\n" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}


	} while (playAgain == 1);

	return 0;
}