#include <iostream>
#include <string>
using namespace std;

int main()
{
	double grossPay;
	double fwt = 0.20;
	double fica = 0.08;
	double state = 0.04;
	double fwtGrossPay;
	double ficaGrossPay;
	double stateGrossPay;
	double netPay;

	cout << "What is your gross pay? :";
	cin >> grossPay;

	fwtGrossPay = grossPay * fwt;
	ficaGrossPay = grossPay * fica;
	stateGrossPay = grossPay * state;

	netPay = fwtGrossPay + ficaGrossPay + stateGrossPay;

	cout << "Your weekly net pay is $" << netPay << ". " << endl;

	system("pause");
	return 0;
}