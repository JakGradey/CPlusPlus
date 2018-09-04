// Example page 91
// Grady, Jacob
// 8/30/2018

#include <iostream>
using namespace std;

int main(){
	double totalBill = 0.0;
	double liquor = 0.0;
	double tipPercent = 0.0;
	double totalNoLiquor = 0.0;
	double tip = 0.0;

	cout << "Enter the total bill: ";
	cin >> totalBill;
	cout << "Enter the liquor charge: ";
	cin >> liquor;
	cout << "Enter the tip percentage in decimal format: ";
	cin >> tipPercent;

	totalNoLiquor = totalBill - liquor;
	tip = totalNoLiquor * tipPercent;

	cout << "Tip: $" << tip << endl;

	system("pause");
	return 0;


}