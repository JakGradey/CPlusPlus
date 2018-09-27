#include <iostream>
#include <string>
using namespace std;


int main() {

	for (int z = 0; z <= 1000; z++)
	{

		if (z % 2 == 0 && z % 3 == 0)
		{

			if (z <= 12)
			{

				cout << z << endl;
			}
		}

	}

	for (int n = 0; n <= 100; n = n + 3)
	{
		cout << n << endl;
		if (n == 48)
		{
			cout << "50, Hah git got" << endl;
		}
		system("pause");
		return 0;

	}

	//Lift off Count Down 
	for (int x = 10; x >= 1; x--)
	{
		cout << x << endl;
		if (x == 1)
		{
			cout << "Lift off!" << endl;
		}
	}
	cout << "" << endl;

}
//for (int i = 0; i <= 10; i++)
//{
//cout << i << endl;
//}
//
//for (int x = 10; x >= 0; x--)
//{
//cout << x << endl;
//if (x == 1)
//{
//cout << "Lift off!" << endl;
//}
//}

//
//for (int n = 0; n <= 100; n = n + 3)
//{
//cout << n << endl;
//if (n == 48)
//{
//cout << "50, Hah git got" << endl;
//}
//}

//
//for (int x = 0; x >= 100; x = x + 5)
//{
//cout << x << endl;
//if (x == 50)
//{
//cout << " 50, What is 9 + 10? " << endl;
//}
//}

//
//	string space = "  ";
//	for (string letter = "o"; o == )
//	{
//		cout << o << endl;
//	}
//
//	A perfect number is a number that is divisible by 1, 2, and 
//	can not be greater than twelve
//	count 1 to 1000 has to be positive
//	system("pause");
//	return 0;
//}