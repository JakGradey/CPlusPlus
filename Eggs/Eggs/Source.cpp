// Eggs
// Grady, Jacob
// 9/4/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int xEggs;
	int dozen = 12;
	int cost;
	int xDozen;
	int eggsLeft;
	double dozenCost;
	double eggsLeftCost;
	double totalCost;

	cout << "How many eggs would you like? : ";
	cin >> xEggs;

	xDozen = xEggs / dozen;
	eggsLeft = xEggs % dozen;
	dozenCost = xDozen * 2.00;
	eggsLeftCost = eggsLeft * 0.25;
	totalCost = eggsLeftCost + dozenCost;

	cout << " You have " << xDozen << " dozen eggs and " << eggsLeft << " eggs left, and your cost is " << totalCost << endl;


	system("pause");
	return 0;
}