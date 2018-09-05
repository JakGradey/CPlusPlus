#include <iostream>
#include <string>
using namespace std;

int main()
{
	double nites;
	double teleUse;
	double niteBill;
	double teleBill;
	double total;

	cout << "How many nights have you stayed here? : ";
	cin >> nites;

	cout << "How many minutes did you use the phone for? : ";
	cin >> teleUse;

	niteBill = nites * 100;
	teleBill = teleUse * 0.25;

	total = niteBill + teleBill;

	cout << "Your total is $" << total << "." << endl;

	system("pause");
	return 0;
}