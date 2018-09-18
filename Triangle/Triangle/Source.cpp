#include <iostream>
#include <string>
using namespace std;

int choosingTriangle;
int solvingFor;

int perimeterFirst;
int perimeterSecond;
int perimeterThird;

int areaHeight;
int areaBase;

int sideA;
int sideB;
int sideC;
int sideMissing;


int perimeter() {
	cout << "What is the number of your first side? : " << endl;
	cin >> perimeterFirst;
	cout << "What is the number of your second side? : " << endl;
	cin >> perimeterSecond;
	cout << "What is the number of your third side? : " << endl;
	cin >> perimeterThird;

	cout << perimeterFirst << " + " << perimeterSecond << " + " << perimeterThird  << " = " << perimeterFirst + perimeterSecond + perimeterThird << endl;
	cout << "" << endl;
	return 0;
}


int area() {
	cout << "What is the height of the triangle? : " << endl;
	cin >> areaHeight;
	cout << "What is the base of the triangle? : " << endl;
	cin >> areaBase;
	cout << areaHeight << " * " << areaBase << " / 2 = " << areaHeight * areaBase / 2 << endl;
	cout << "" << endl;

	return 0;
}


int rightTriSide() {
	double a, b, c;
	cout << "Which side are you missing in the pythagorean theorem? ";
	cout << "Side A\nSide B\nSide C" << endl;
	cout << "Side A = leg, Side B = leg, Side C = hypotenuse" << endl;
	cout << "1 - Side A\n2 - Side B\n3 - Side C" << endl;
	cin >> sideMissing;

	if (sideMissing == 1)
	{
		cout << "What is side C? : ";
		cin >> c;

		cout << "What is side B? : ";
		cin >> b;
		cout << c << " - " << b << " = " << c - b << endl;
		cout << "" << endl;

	} else if (sideMissing == 2)
	{
		cout << "What is side C? : ";
		cin >> c;

		cout << "What is side A? : ";
		cin >> a;
		cout << c << " - " << a << " = " << c - a << endl;
		cout << "" << endl;

	}else if (sideMissing == 3)
	{
		cout << "What is side A? : ";
		cin >> a;

		cout << "What is side B? : ";
		cin >> b;
		cout << a << " + " << b << " = " << a + b << endl;
		cout << "" << endl;

	}
	return 0;
}

int isocelesTriSide() {
	double a, b, c;
	cout << "Which side are you missing in the pythagorean theorem? " << endl;
	cout << "Side A = leg\nSide B = leg\nSide C = hypotenuse" << endl;
	cout << "1 - Side A\n2 - Side B\n3 - Side C" << endl;
	cin >> sideMissing;

	if (sideMissing == 1)
	{
		cout << "What is side C? : ";
		cin >> c;

		cout << "What is side B? : ";
		cin >> b;
		cout << c << " - " << b << " = " << c - b << endl;
		cout << "" << endl;

	}
	else if (sideMissing == 2)
	{
		cout << "What is side C? : ";
		cin >> c;

		cout << "What is side A? : " << endl;
		cin >> a;
		cout << c << " - " << a << " = " << c - a << endl;
		cout << "" << endl;

	}
	else if (sideMissing == 3)
	{
		cout << "What is side A? : ";
		cin >> a;

		cout << "What is side B? : ";
		cin >> b;
		cout << a << " + " << b << " = " << a + b << endl;
		cout << "" << endl;

	}
	return 0;
}

int equilateralTriSide() {
	double sameNum;
	cout << "What is the number for one of your sides? : " << endl;
	cin >> sameNum;
	cout << "Your missing side is " << sameNum << endl;
	cout << "" << endl;
	return 0;
}

int rightTriangle() {
	cout << "What are you solving for?" << endl;
	cout << "1 - Perimeter\n2 - Missing Side\n3 - Area" << endl;
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
	return 0;
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
	return 0;
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
	return 0;
}


int main()
{
	do {
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
	} while (choosingTriangle != 4);
		system("pause");
		return 0;
}