#include <iostream>
#include <string>
using namespace std;

int choosingTriangle;
int solvingFor;


int perimeterCalculate(int perimeterFirst, int perimeterSecond, int perimeterThird) {
	cout << perimeterFirst << " + " << perimeterSecond << " + " << perimeterThird << " = " <<
		perimeterFirst + perimeterSecond + perimeterThird << endl;
	return 0;
}

int areaCalculate(int height, int base) 
{
	cout << height << " * " << base << " / 2 = " << height * base / 2 << endl;
	return 0;
}


int perimeter() {
	cout << "What is the number of your first side? : " << endl;
	cin >> perimeterFirst;


	return 0;
}


int area() {
	cout << "What is the height and base of the triangle? : " << endl;
	cin >> areaCalculate();
}


int rightTriSide() {

}

int isocelesTriSide() {

}

int equilateralTriSide() {

}

int rightTriangle() {
	cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area\n4 - Leave" << endl;
	cin >> solvingFor;

	if (solvingFor == 1) {
		cout << perimeter();

	}
	if (solvingFor == 2) {
		cout << rightTriSide();
	}
	if (solvingFor == 3) {
		cout << area();

	}
}

int isoceles() {
	cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area\n4 - Leave" << endl;
	cin >> solvingFor;

	if (solvingFor == 1) {
		cout << perimeter();

	}
	if (solvingFor == 2) {
		cout << isocelesTriSide();
	}
	if (solvingFor == 3) {
		cout << area();

	}

}

int equilateral() {
	cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area\n4 - Leave" << endl;
	cin >> solvingFor;

	if (solvingFor == 1) {
		cout << perimeter();

	}
	if (solvingFor == 2) {
		cout << equilateralTriSide();
	}
	if (solvingFor == 3) {
		cout << area();

	}
}


int main()
{

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
		cout << "Please pick a number that actually does something. " << endl;

		system("pause");
		return 0;
}