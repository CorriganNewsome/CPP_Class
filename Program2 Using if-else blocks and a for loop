//Corrigan Newsome cnewsome2@cnm.edu
//P3 Fruit Finder

//Driver.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//Write header
	cout << "\n Corrigan Newsome "
		<< "\n CIS (Computer Programming) "
		<< "\n To prepare for a Master's in Software Systems Design from NMHU. ";

	//declaring variables - need 7 fruits
	vector<string> fruitStrings = { "apples", "bananas", "watermelons" };
	char answer{ 'y' };
	string sentence;

	do  //play loop
	{
		//ask the user for a sentence with fruit in it, showing an example.
		//read the sentence with a getline.

		//if the first letter of the sentence is a fruit, it needs to be lower case
		//So lower the first character in the sentence.
		sentence.at(0) = tolower(sentence.at(0));

		//search the sentence for fruit. Once a fruit is found, stop searching.
		//make a loop to search for all the fruits, if necessary.

		int index{ 0 };
		int x{ 0 };
		bool foundFruit{ false };
		while (x < fruitStrings.size() && foundFruit == false)
		{
			//use the find function to return the index of any fruit found
			//if -1 is returned, no fruit was found.
			//if(index < 0 , could also be index == -1)  fruit not found
			{
				++x;
			}
			else  //a fruit was found !!
			{
			foundFruit = true;
			//change the first letter back to a capital

			}
		}

		if (/* no fruit was found*/)
		{
			cout << "something clever.";
		}
		else
		{
			//identify the fruit that was found. It was the one at x. 
			string found = fruitStrings.at(x);
			//figure out how long the string is for the fruit that was found.
			//exchange that fruit with "Brussel Sprouts" in the sentence.

			//Finally, cout the modified sentence
		}

		//ask the user if they want to do anther? y/n
		//read the user's answer.
	} while (answer == 'y');

	//say goodbye

	return 0;
}
