#include <iostream>
#include <string>
using namespace std;

int intA;
int intB;
int intC;

int rightTriangle() {
	cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area\n4 - Leave" << endl;

}

int isoceles() {
	cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area\n4 - Leave" << endl;

}

int equilateral() {
	cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area\n4 - Leave" << endl;
}

int rightTriSide() {

}

int isocelesTriSide() {

}

int equilateralTriSide() {

}





int main()
{
	int choosingTriangle;

	cout << "Welcome to the triangle calculator. " << endl;
	cout << "What type of triangle are you solving for? " << endl;
	cout << "1 - Right Triangle\n2 - Isoceles\n3 - Equilateral\n4 - Leave" << endl;
	cin >> choosingTriangle;

	if (choosingTriangle == 1) {
		rightTriangle();
	}

	else if (choosingTriangle == 2) {
		isoceles();
	}

	else if (choosingTriangle == 3) {
		equilateral();
	}
	else
		cout << 

		cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area\n4 - Leave" << endl;

}