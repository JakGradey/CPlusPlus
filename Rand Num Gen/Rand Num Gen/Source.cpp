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
			cout << "You Win! It took you " << count << " tries to guess the right number." << endl;
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
			countTwo = countTwo + 1;
		}
		else
			cout << "You Win! It took you " << countTwo << " tries to guess the right number." << endl;

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
			countThree = countThree + 1;
		}
		else
			cout << "You Win!  It took you " << countThree << " tries to guess the right number." << endl;
		
	} while (numChoiceThree != secretThree);
	return 0;

}


int computerRandomGame() {
	int numChoiceTwo;
	int computerSecret;
	int computerCount = 0;

	do {
		srand((unsigned int)time(NULL));
		computerSecret = rand() % 100 + 1;
		cout << "Pick a random number from 1-100: ";
		numChoiceTwo = rand() % 100 + 1;

		if (numChoiceTwo > computerSecret)
		{
			cout << "The number you have chose is too high!, guess again stupid! " << endl;
			computerCount = computerCount + 1;
		}
		else if (numChoiceTwo < computerSecret)
		{
			cout << "The number you have chose is too low!, guess again stupid! " << endl;
			computerCount = computerCount + 1;
		}
		else
			cout << "You Win! It took you " << computerCount << " tries to guess the right number." << endl;

	} while (numChoiceTwo != computerSecret);
	return 0;
}

int randomNumbersDisplayed() {
	int randomNum;
	int randomNumber;

	for (int n = 0; n <= 10; n = n + 1)
	{
		srand((unsigned int)time(NULL));
		randomNum = rand() % 10 + 1;
		cout << randomNum << endl;
	}

	return 0;
}

int main() {
	int gameChoice;

	do {
		cout << "Welcome to my random number Generator game, choose \n1 - Easy\n2 - Medium\n3 - Hard\n4 - Watch Computer Try\n5 - Watch 10 Random Numbers Happen\n6 - Quit" << endl;
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
		else if (gameChoice == 4)
		{
			computerRandomGame();
		}
		else if (gameChoice == 5)
		{
			randomNumbersDisplayed();
		}
	} while (gameChoice != 6);

	system("pause");
	return 0;
}