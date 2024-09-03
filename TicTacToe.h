#include <iostream>
#pragma once

using namespace std;

void Board();
void FillBoard(char playerChoice);
void ComputerPicks();
void TicyTacy();

char boardTable[5][5] = { {' ', '|', ' ', '|', ' '}, 
							{'-', '-', '-', '-', '-'}, 
							{' ', '|', ' ', '|', ' '}, 
							{'-', '-', '-', '-', '-'}, 
							{' ', '|', ' ', '|', ' '} };
bool gameOver = false;

void Board()
{
	for (int i = 0; i < 5; i++)
	{
		cout << boardTable[i][0]
			 <<	boardTable[i][1]
			 <<	boardTable[i][2]
			 <<	boardTable[i][3]
			 <<	boardTable[i][4] << endl;
	}
}

void FillBoard(char playerChoice)
{
	if (playerChoice == '1' && boardTable[0][0] == ' ')
	{
		boardTable[0][0] = 'X';
	}
	else if (playerChoice == '2' && boardTable[0][2] == ' ')
	{
		boardTable[0][2] = 'X';
	}
	else if (playerChoice == '3' && boardTable[0][4] == ' ')
	{
		boardTable[0][4] = 'X';
	}
	else if (playerChoice == '4' && boardTable[2][0] == ' ')
	{
		boardTable[2][0] = 'X';
	}
	else if (playerChoice == '5' && boardTable[2][2] == ' ')
	{
		boardTable[2][2] = 'X';
	}
	else if (playerChoice == '6' && boardTable[2][4] == ' ')
	{
		boardTable[2][4] = 'X';
	}
	else if (playerChoice == '7' && boardTable[4][0] == ' ')
	{
		boardTable[4][0] = 'X';
	}
	else if (playerChoice == '8' && boardTable[4][2] == ' ')
	{
		boardTable[4][2] = 'X';
	}
	else if (playerChoice == '9' && boardTable[4][4] == ' ')
	{
		boardTable[4][4] = 'X';
	}
	else
	{
		system("cls");
		cout << "Not correct input, or the square has already been filled. Please try again." << endl;
		Board();
		char newInput;
		cin >> newInput;
		FillBoard(newInput);
	}
}

void ComputerPicks()
{
	// Check if there is 2 in a row
	for (int i = 0; i < 5; i++)
	{
		if ()
	}
}

void TicyTacy()
{
	char playerChoice;

	cout << "Pick a square, you will be playing as 'X'" << endl;

	while (!gameOver)
	{
		system("cls"); // Clear screen
		cout << "You are playing as 'X'" << endl << endl;
		Board();

		cin >> playerChoice;
		FillBoard(playerChoice);
	}
}
