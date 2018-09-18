#include <iostream>
#include <string>
using namespace std;

int main()
{

	string collegeYN;
	string yes = "I'm Broke! ";
	string no = "I wish I went to college. ";

	int age;
	string freshman = "HA, you freshman trash! ";
	string minor = "You are a minor ";
	string maybeHS = "You are an ignoramous. ";
	string college = " You only eat Ramen. ";
	string job = "You work at Mcdonalds. ";
	string wish = "Finally got promoted to manager at McDonalds you loser. ";
	string half = "You still play on your SNES because your a failure. ";
	string retire = "So your retired, nothings really different except you now do nothing at all. ";
	string dead = "WHY AREN'T YOU DEAD YET YOU OLD FART!!?? ";


	cout << "How old are you? : ";
	cin >> age;

	if (age <= 12) {
		cout << minor;
	}
	else if (age > 13 && age <= 18) {
		cout << maybeHS;
	}
	else if (age > 18 && age <= 25) {
		cout << college;
	}
	else if (age > 25 && age <= 30) {
		cout << job;
	}
	else if (age > 30 && age <= 40) {
		cout << wish;
	}
	else if (age > 40 && age <= 50) {
		cout << half;
	}
	else if (age > 50 && age <= 75) {
		cout << retire;
	}
	else  {
		cout << dead;
	}
	cout << "Did you go to college ? Yes or No >>>";
	cin >> collegeYN;

	if (collegeYN == "Yes" || collegeYN == "yes") {
		cout << yes;
	}
	if (collegeYN == "No" || collegeYN == "no") {
		cout << no;
	}

	system("pause");
	return 0;

}