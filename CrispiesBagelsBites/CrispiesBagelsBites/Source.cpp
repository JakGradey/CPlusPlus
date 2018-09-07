#include <iostream>
#include <string>
using namespace std;

int main()
{
	double bagels = 0.99;
	double donuts = 0.75;
	double coffee = 1.20;
	double bagelsNum;
	double donutsNum;
	double coffeeNum;
	double bagelTot;
	double donutTot;
	double coffeeTot;
	double total;

	cout << "How many donuts do you want? :";
	cin >> donutsNum;

	cout << "How many bagels do you want? :";
	cin >> bagelsNum;

	cout << "How many cups of coffee do you want? :";
	cin >> coffeeNum;

	coffeeTot = coffee * coffeeNum;
	bagelTot = bagels * bagelsNum;
	donutTot = donuts * donutsNum;

	total = coffeeTot + bagelTot + donutTot;

	cout << "Your total is $" << total << ".";

	system("pause");
	return 0;
}