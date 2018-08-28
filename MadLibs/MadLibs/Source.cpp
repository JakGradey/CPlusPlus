#include <string>
#include <iostream>
using namespace std;

int main()
{
	int intA;
	int intB;
	int intC;

	string color;
	string wordEndingWithEst;
	string bodyPartPlural;
	string animal;
	string noun;
	string pluralNoun;

	cout << "Type in a random integer. ";
	cin >> intA;
	cout << "Type in another random integer. ";
	cin >> intB;
	cout << "What is your favorite color? ";
	cin >> color;
	cout << "Type of a word ending with est. ";
	cin >> wordEndingWithEst;
	cout << "Type in a plural body part. ";
	cin >> bodyPartPlural;
	cout << "What is an animal you like? ";
	cin >> animal;
	cout << "Type in a noun. ";
	cin >> noun;
	cout << "Type in a plural noun. ";
	cin >> pluralNoun;

	intC = intA + intB;

	cout << "The " << color << " Dragon is the " << wordEndingWithEst << " Dragon of all. It has " << intC << " " <<
		bodyPartPlural << ", and a " << animal << " shaped like a " << noun << ". It loves to eat " << pluralNoun <<
		", although it will feast on nearly anything." << endl;

	system("pause");
	return 0;
}
 