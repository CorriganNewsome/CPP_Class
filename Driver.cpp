//Corrigan Newsome cnewsome2@cnm.edu
//Conditional Statement Demo

//Driver.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
/*	string userInput;
	string ynInput;
	cout << "\n Please enter A, B or C: ";
	getline(cin, userInput);

	cout << "\n Please enter y or n: ";
	getline(cin, ynInput);

	if (userInput == "A")
	{
		cout << "\n You entered A!";
	}
	else if (userInput == "B")
	{
		if (ynInput == "y")
		{
			cout << "\n You entered B and y!";
		}
		else if (ynInput == "n")
		{
			cout << "\n You entered B and n!";
		}
		else
		{
			cout << "\n You entered but not y or n!";
		}
	}
	else if (userInput == "C")
	{
		cout << "\n You entered C!";
	}
	else
	{
		cout << "\n You did not enter A, B or C!";
	}
	*/
	//Ternary Operator
	/*float temperature{ 0 };
	string AirConditioner;

	AirConditioner = temperature > 80 ? "on" : "off";
	cout << "\n The air conditioner is " << AirConditioner
	*/
	
	//Switch Statment
	char userInput{ 'a' };

	//get the user input
	cout << "\n Please enter A, B or C: ";
	cin >> userInput;

	switch (userInput)
	{
	case 'A':
		cout << "\n You entered an A! ";
		break;
	case 'B':
		cout << "\n You entered a B! ";
		break;
	case 'C':
		cout << "\n You entered a C! ";
		break;
	default:
		cout << "\n You did not enter A, B or C! Error! ";
		break;
	}

	return 0;
}