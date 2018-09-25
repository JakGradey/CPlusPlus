#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int doorGame() {
	int prize = 1;
	int userDoorChoice;

	cout << "Pick one of the three doors\nDoor1\nDoor2\nDoor3 " << endl;
	cin >> userDoorChoice;

	if (userDoorChoice == 1) {
		cout << prize;
	}
	else if (userDoorChoice == 2) {
		cout << prize;
	}
	else if (userDoorChoice == 3) {
		cout << prize;
	}
	else
		cout << "Not available";
	return 0;
}

int randomGameHard() {
	int numChoiceTwo;
	int secretTwo;
	srand(time(NULL));
	secretTwo = rand() % 100 + 1;

	do {
		cout << "Pick a random number from 1 to 100: ";
		cin >> numChoiceTwo;

		if (numChoiceTwo == secretTwo) 
		{
			cout << "You Win!";
		}
		else
			cout << "Guess again ";
	} while (numChoiceTwo != secretTwo);


	return 0;
}

int randomGame() {
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;
	
	do {
		cout << "Pick a random number from 1 to 10: ";
		cin >> numChoice;

		if (numChoice == secret) {
			cout << "You Won!";
		}
		else
			cout << "Guess again ";
	} while (numChoice != secret);

	return 0;
}

int main() {
	int pickGame;

	do {
	cout << "Welcome to my fabulous Game\nGame 1, Game 2, or Game 3\nTo quit press 4." << endl;
	cin >> pickGame;

		if (pickGame == 1)
		{
			doorGame();
		}
		else if (pickGame == 2)
		{
			randomGame();
		}
		else if (pickGame == 3)
		{
			randomGameHard;
		}
	} while (pickGame != 4);

	system("pause");
	return 0;
}