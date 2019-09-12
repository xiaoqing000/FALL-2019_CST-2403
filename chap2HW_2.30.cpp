// chap2HW_2.30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main()
{
	double weightInPouds = 0;
	double	heightInInFeet = 0;
	double BMI;

	// get the Weight in pounds
	cout << "\n BMI Calculator- Enter your weight in pouds:";
	cin >> weightInPouds;

	// get the height in feet
	cout << "Enter your height in feet:\n";
	cin >> heightInInFeet;

	// calculate the BMI value and converrt feet to inches by *12
	BMI = (weightInPouds * 703) / ((heightInInFeet * 12) * (heightInInFeet * 12));

	// if less than 18.5 is underweight
	if (BMI < 18.5)
	{
		cout << "Underweight\n" << BMI;
	}

	// if between 18.5  and 24.9 is nomal
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		cout << "Normal\n" << BMI << endl;
	}

	// else greater than 25 and 29.9 is overweight
	else
	{
		(BMI >= 25 && BMI <= 29.9);
		cout << "Overweight\n" << BMI;
	}
	return 0;
}

