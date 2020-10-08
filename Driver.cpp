//Corrigan Newsome cnewsome2@cnm.edu

//Quiz 2

//Driver.cpp

#include <iostream>;
#include <string>;
using namespace std;

int main() 
{

	string{ "input" };

	cout << "\n Corrigan Newsome.\n ";
	cout << "\n CIS (Computer Programming).\n";
	cout << "\n to obtain more software development knowledge and eventually transfer to a Bachelor's Program.\n";



    std::string input;
	
	while (true)
	{


	std::cout << "\n\n\n\n For day 1, what is the weather condition predicted to be (enter the menu number)? \n 1. Sunny \n 2. Rainy \n 3. Cloudy \n\n";
	std: cin >> input;
		if (input == "1")
		{
			cout << "cool";
		}
		else
		{
			std::cout << "Invalid input: " << input << std::endl;
		}
	}
	return 0;
}