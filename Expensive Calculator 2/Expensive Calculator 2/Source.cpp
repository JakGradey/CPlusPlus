#include <string>
#include <iostream>
using namespace std;


int main()
{
	string nameString;

	int firstNum;
	int secondNum;
	int add;
	int subtract;
	int multiply;
	int divide;
	int remainder;

	cout << "What is your name? ";
	cin >> nameString;

	cout << "Please enter your first number ";
	cin >> firstNum;

	cout << "Please enter another number ";
	cin >> secondNum;

	add = firstNum + secondNum;
	cout << "The sum of" << firstNum << " and " << secondNum << " = " << add << endl;

	subtract = firstNum - secondNum;
	cout << "The difference of" << firstNum << " and " << secondNum << " = " << subtract << endl;

	multiply = firstNum * secondNum;
	cout << "The product of" << firstNum << " and " << secondNum << " = " << multiply << endl;
	
	divide = firstNum / secondNum;
	cout << "The division of" << firstNum << " and " << secondNum << " = " << divide << endl;
	
	remainder = firstNum % secondNum;
	cout << "The remainder of" << firstNum << " and " << secondNum << " = " << remainder << endl;
	
	system("pause");  

	return 0;

}