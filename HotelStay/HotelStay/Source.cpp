// HotelStay
// Grady, Jacob
// 8/30/2018

#include <iostream>
#include <string>
using namespace std;

int main() {
	string userName;
	double totalBill;
	double roomCharge = 120;
	double internetCharge = 9.99;
	int daysStayed = 0;

	cout << "Enter how many days stayed: ";
	cin >> daysStayed;
	cout << "Enter name here: ";
	cin >> userName;

	totalBill = roomCharge * daysStayed + internetCharge * daysStayed;

	cout << "You stayed " << daysStayed << " days " << userName << " and now you owe us $" << totalBill << endl;

	system("pause");
	return 0;
}