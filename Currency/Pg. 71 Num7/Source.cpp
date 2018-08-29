#include <string>;
#include <iostream>;
using namespace std;



int main()
{
	int americanDollars;
	float britishPounds;
	float mexicanPesos;
	float japaneseYen;


	cout << "How many dollars do you have? ";
	cin >> americanDollars;



	britishPounds = .6318 * americanDollars;
	mexicanPesos = 12.8863 * americanDollars;
	japaneseYen = 82.34 * americanDollars;

	cout << americanDollars << " is the same as " << britishPounds << " British pounds, " << mexicanPesos << " Mexican pesos, and "
		<< japaneseYen << " Japanese yen. ";


	system("pause");
	return 0;
}