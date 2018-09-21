#include <iostream>
#include <string>
using namespace std;

int main() {

	char grade = ' ';
	string result;
	// enter grrade to tell you what type of student you are hehehehehe

	cout << "Enter your letter grade so we can judge you: ";
	cin >> grade;

	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		result = "Excellent.\n";
		break;
	case 'B': " Meh , good but not great.\n";
		break;
	case'C':
		result = "Some say this is average.\n";
		break;
	case 'D':
		result = "You'll be working at a factory.\n";
			break;
	case 'F':
		result = "Good luck with that.\n";
		break;
	default:
		result = "Not Valid.\n";
	}//end switch
	cout << result;
	system("pause");
	return 0;
}//end of main