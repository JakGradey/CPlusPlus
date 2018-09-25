#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int easyRandomGame() {
	int numChoice;
	int secret;
	int count = 1;

	srand(time(NULL));
	secret = rand() % 10 + 1;

	do {
		cout << "Pick a random number from 1-10: ";
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "The number you have chose is too high!, guess again stupid! " << endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			cout << "The number you have chose is too low!, guess again stupid! " << endl;
			count = count + 1;
		}
		else
			cout << "You Win! " << endl;

		return 0;
	} while (numChoice != secret);
}

int mediumRandomGame() {
	int numChoice;
	int secret;
	int count = 1;

	srand(time(NULL));
	secret = rand() % 100 + 1;

	do {
		cout << "Pick a random number from 1-100: ";
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "The number you have chose is too high!, guess again stupid! " << endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			cout << "The number you have chose is too low!, guess again stupid! " << endl;
		}
		else
			cout << "You Win! " << endl;

		return 0;
	} while (numChoice != secret);
}



int main() {
	int gameChoice;

	cout << "Welcome to my random number Generator game, choose 1 - Easy\n2 - Medium\n3 - Hard" << endl;
	cin >> gameChoice
		if (gameChoice == 1)
		{
			easyRandomGame;
		}
		else (gameChoice == 2)
		{
			mediumRandomGame;
		}
		else (gameChoice == 3)
		{
		hardRandomGame;
		}

	system("pause");
	return 0;

}