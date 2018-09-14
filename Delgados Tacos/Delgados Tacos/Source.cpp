#include <iostream>
#include <string>
using namespace std;

int tacoTruck() {
	cout << "                                     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "                                    X X                 X                                                             X" << endl;
	cout << "                                   X X                  X                                                             X" << endl;
	cout << "                                  X X                   X       XXXXXXXXXXX                                           X" << endl;
	cout << "                                 X X                    X            X                                                X" << endl;
	cout << "                                X X                     X            X             X                                  X" << endl;
	cout << "                               X X                      X            X       XXXXXXX    XXXXXXX    XXXXXXX            X" << endl;
	cout << "                              X X                       X            X       X     X    X          X     X            X" << endl;
	cout << "                             X X                        X            X       X     X    X          X     X            X" << endl;
	cout << "                            XXXXXXXXXXXXXXXXXXXXXXXXXXXXX            X       XXXXXXX    XXXXXXX    XXXXXXX            X" << endl;
	cout << "                           X                            X                                                             X" << endl;
	cout << "               XXXXXXXXXXXX                             X                                                             X" << endl;
	cout << "               X                                        X                                                             X" << endl;
	cout << "               X                                        X                                                             X" << endl;
	cout << "               X                                        X                                                             X" << endl;
	cout << "               X         XXXXXX                         X                                           XXXXXX            X" << endl;
	cout << "               X        X      X                        X                                          X      X           X" << endl;
	cout << "               XXXXXXXXX        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        XXXXXXXXXXXX" << endl;
	cout << "                        X      X                                                                   X      X           " << endl;
	cout << "                         XXXXXX                                                                     XXXXXX            " << endl;
	cout << "" << endl;
	return 0;
} 

int menu() {
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "X                                                        X" << endl;
	cout << "X                   Delgados Tacos                       X" << endl;
	cout << "X                                                        X" << endl;
	cout << "X          Taco                   $1.25                  X" << endl;
	cout << "X          Burrito                $1.75                  X" << endl;
	cout << "X          Taco Salad             $2.00                  X" << endl;
	cout << "X          Enchilada              $2.75                  X" << endl;
	cout << "X          Quesadilla             $2.50                  X" << endl;
	cout << "X          Jamaican Taco          $4.00                  X" << endl;
	cout << "X                                                        X" << endl;
	cout << "X                                                        X" << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "";
	return 0;
}

int main()
{

	double tacos = 1.25;
	double burritos = 1.75;
	double tacoSalad = 2.00;
	double enchiladas = 2.75;
	double quesadilla = 2.50;
	double jamaicanTaco = 4.00;

	double tacosNum = 0;
	double burritosNum = 0;
	double tacoSaladNum = 0;
	double enchiladasNum = 0;
	double quesadillaNum = 0;
	double jamaicanTacoNum = 0;

	double tacosTot = 0;
	double burritosTot = 0;
	double tacoSaladTot = 0;
	double enchiladasTot = 0;
	double quesadillaTot = 0;
	double jamaicanTacoTot = 0;

	double tacosTotTaxed;
	double burritosTotTaxed;
	double tacoSaladTotTaxed;
	double enchiladasTotTaxed;
	double quesadillaTotTaxed;
	double jamaicanTacoTotTaxed;

	double taxRate = 0.10;
	double total;
	double totalTaxed;
	int choice;
	tacoTruck();

	menu();

	cout << "Welcome to Delgados Tacos what would you like to order from our menu above? >>";
	cin >> choice;
	if (choice == 1) {
		cout << "How many tacos do you want? :";
		cin >> tacosNum;
	}
	else if (choice == 2) {
		cout << "How many burritos do you want? :";
		cin >> burritosNum;
	}
	else if (choice == 3) {
		cout << "How many taco salads do you want? :";
		cin >> tacoSaladNum;
	}
	else if (choice == 4) {
		cout << "How many quesadillas do you want? :";
		cin >> quesadillaNum;
	}
	else if (choice == 5) {
		cout << "How many enchiladas do you want? :";
		cin >> enchiladasNum;
	}
	else if (choice == 6) {
		cout << "How many jamaican tacos do you want? :";
		cin >> jamaicanTacoNum;
	}

	tacosTot = tacos * tacosNum;
	burritosTot = burritos * burritosNum;
	tacoSaladTot = tacoSalad * tacoSaladNum;
	enchiladasTot = enchiladas * enchiladasNum;
	quesadillaTot = quesadilla * quesadillaNum;
	jamaicanTacoTot = jamaicanTaco * jamaicanTacoNum;

	tacosTotTaxed = tacosTot * taxRate;
	burritosTotTaxed = burritosTot * taxRate;
	tacoSaladTotTaxed = tacoSaladTot * taxRate;
	enchiladasTotTaxed = enchiladasTot * taxRate;
	quesadillaTotTaxed = quesadillaTot * taxRate;
	jamaicanTacoTotTaxed = jamaicanTacoTot * taxRate;

	total = tacosTot + burritosTot + tacoSaladTot + enchiladasTot + quesadillaTot + jamaicanTacoTot;



	totalTaxed = tacosTotTaxed + burritosTotTaxed + tacoSaladTotTaxed + enchiladasTotTaxed + quesadillaTotTaxed + jamaicanTacoTotTaxed;

	system("pause");
	return 0;
}