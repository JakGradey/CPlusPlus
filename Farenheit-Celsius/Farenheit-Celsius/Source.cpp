#include <iostream>
#include <string>
using namespace std;


double convert(double fahren)
{
	double r;
	r = (fahren - 32) * 5 / 9;
	return 0;
}

int main()
{


	double fToC;
	double fTemp6;
	double fTemp1;
	double fTemp8;

	cout << " What was the temperature at 6:00 A.M. today in fahrenheit? ";
	cin >> fTemp6;
	cout << " What was the temperature at 1:00 P.M. today in fahrenheit? ";
	cin >> fTemp1;
	cout << " What was the temperature at 8:00 P.M. today in fahrenheit? ";
	cin >> fTemp8;

	fToC = convert(fTemp6);
	cout << " At 6:00 A.M. the temperature was " << fToC;
	fToC = convert(fTemp1);
	cout << " At 1:00 P.M. the temperature was " << fToC;
	fToC = convert(fTemp8);
	cout << " At 8:00 P.M. the temperature was " << fToC;

	system("pause");
	return 0;

}