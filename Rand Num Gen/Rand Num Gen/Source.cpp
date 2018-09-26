#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int easyRandomGame() {
	int numChoice;
	int secret;
	int count = 0;

	srand((unsigned int)time(NULL));
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
	} while (numChoice != secret);

	return 0;
}

int mediumRandomGame() {
	int numChoiceTwo;
	int secretTwo;
	int countTwo = 0;

	srand((unsigned int)time(NULL));
	secretTwo = rand() % 100 + 1;

	do {
		cout << "Pick a random number from 1-100: ";
		cin >> numChoiceTwo;

		if (numChoiceTwo > secretTwo)
		{
			cout << "The number you have chose is too high!, guess again stupid! " << endl;
			countTwo = countTwo + 1;
		}
		else if (numChoiceTwo < secretTwo)
		{
			cout << "The number you have chose is too low!, guess again stupid! " << endl;
		}
		else
			cout << "You Win! " << endl;

	} while (numChoiceTwo != secretTwo);
	return 0;
}

int hardRandomGame() {
	int numChoiceThree;
	int secretThree;
	int countThree = 0;

	srand((unsigned int)time(NULL));
	secretThree = rand() % 1000 + 1;

	do {
		cout << "Pick a random number from 1-1000: ";
		cin >> numChoiceThree;

		if (numChoiceThree > secretThree)
		{
			cout << "The number you have chose is too high!, guess again stupid! " << endl;
			countThree = countThree + 1;
		}
		else if (numChoiceThree < secretThree)
		{
			cout << "The number you have chose is too low!, guess again stupid! " << endl;
		}
		else
			cout << "You Win! " << endl;

	} while (numChoiceThree != secretThree);
	return 0;

}


int main() {
	int gameChoice;

	do {
		cout << "Welcome to my random number Generator game, choose 1 - Easy\n2 - Medium\n3 - Hard\n4 - Quit" << endl;
		cin >> gameChoice;

		if (gameChoice == 1)
		{
			easyRandomGame();
		}
		else if (gameChoice == 2)
		{
			mediumRandomGame();
		}
		else if (gameChoice == 3)
		{
			hardRandomGame();
		}
	} while (gameChoice != 4);

	system("pause");
	return 0;
}