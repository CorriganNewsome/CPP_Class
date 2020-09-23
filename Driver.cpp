//Corrigan Newsome cnewsome2@cnm.edu
//CIS 1275, C++1
//Program 1, Counting Jelly Beans

//Driver.cpp

#include <iostream>;
using namespace std;

int main()
{
	cout << "\n Corrigan Newsome, Counting Jelly Beans, "
		<< "\n Calulating and coding";

	//declare variables
	const double PI{ 3.14159 };
	const int PACKING_FACTOR{ 20 };
	const double BEAN_LENGTH{ 0.625 };
	const double BEAN_DIAMETER{ 0.25 };

	double height{ 0.0 };
	double diameter{ 0.0 };
	double jarThickness{ 0.0 };
	double radius{ diameter / 2 };
	double newVolume{ 0.0 };
	double newRadius{ 0.0 };

	double jarVolume{ 0.0 };
	double beanVol{ 0.0 };


	//Get input from the user
	cout << "\n Please enter the height of the jar in inches ";
	cin >> height;

	//Do the same for diameter.
	cout << "\n Please enter the diameter ";
	cin >> diameter;

	//Do the same for jar wall thickness.
	cout << "\n Please enter the jar thickness ";
	cin >> jarThickness;

	//Calculate the radius of the jar. Subtract the glass thickness. 
	newRadius = { radius - jarThickness };

	//Calculate the jar volume
	jarVolume = PI * (newRadius * newRadius) * height;

	//Adjust the volume by the PACKING_FACTOR.
	newVolume = (1 - 20 / 100) * jarVolume;

	//Calculate the volume of a bean using the formula.
	beanVol = (4.0 / 3.0) * BEAN_LENGTH * (BEAN_DIAMETER * BEAN_DIAMETER);

	//Calculate the number of beans
	int numBeans = static_cast<int>(jarVolume / beanVol);

	//Display the numbers entered by the user, and the results.

	cout << "\n The number of beans that can fit into the jar is.... ";

	cout << numBeans;

	cout << "\n Goodbye and thank you for counting beans with us! ";


	return 0;
}