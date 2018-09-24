#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int randomGame() {
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

		} while (numChoice != secret);

	return 0;
}



int main() {

	randomGame();

	system("pause");
	return 0;

}