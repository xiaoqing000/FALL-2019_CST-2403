// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	double number1;
	double number2;
	double answer;
	char op;
	do {

		cout << "\nCalculator-Enter a number:";
		cin >> number1;

		cout << "Enter operator +,-,*,/:";
		cin >> op;

		cout << "Enter another number:\n";
		cin >> number2;

		if (op == '+')  answer = number1 + number2;

		if (op == '-') answer = number1 - number2;

		if (op == '*') answer = number1 * number2;

		if (op == '/') answer = number1 / number2;
		cout << answer;
	} while (op != 'e');
	return 0;
}
