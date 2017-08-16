//Christopher Eduarte
//CSIS 135
//Homework 2

/*Pseudocode:
1. Declare variables
2. Display menu.
3. Display options.
4. Ask the user for what option he wants.
5. Ask the user for their weight on Earth.
6. Ask the user for their speed on Earth. 
7. Use an if-else-if statement for each choice. 
8. Find weight in new planet for each part.
9. Find the distance between planets for each part.
10. Find the distance between two planets.
11. Find the travel time by dividing the travel time by
    rate. 
12. 
	
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	char character;
	double weightOnEarth;
	double speedOnEarth;
	double distanceOfNewPlanet; 

	cout << "Welcome to the INTERPLANETARY TRAVEL PROGRAM" << endl;
	cout << "This enables you to find your travel time to the planet" << endl;
	cout << "you want to travel to as well as your weight on there." << endl;
	cout << "Please enjoy the program and hope you find the perfect planet for you." << endl;

	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;

	cout << "INTERPLANETARY TRAVEL MENU" << endl;
	cout << "" << endl;
	cout << "--------------------------" << endl;

	cout << "" << endl;
	cout << "" << endl;

	cout << "a) Mercury" << endl;
	cout << "" << endl;
	cout << "b) Venus" << endl;
	cout << "" << endl;
	cout << "c) Earth" << endl;
	cout << "" << endl;
	cout << "d) Mars" << endl;
	cout << "" << endl;
	cout << "e) Jupitar" << endl;
	cout << "" << endl;
	cout << "f) Saturn" << endl;
	cout << "" << endl;
	cout << "g) Uranus" << endl;
	cout << "" << endl;
	cout << "h) Neptune" << endl;
	cout << "" << endl;
	cout << "q) quit: <<" << endl;
	cout << "" << endl; 

	cout << "Select a program to travel to or q to quit the program" << endl;

	cin >> character;

	cout << "Please enter your weight (in lbs)" << endl;
	cin >> weightOnEarth;

	cout << "Please enter the speed (in miles pers hour) that would like to travel at:" << endl;
	cin >> speedOnEarth;
	
	if(character == 'a' || character == 'A')
	{
		distanceOfNewPlanet = 36;
		cout << "INTERPLANETARY TRAVEL: Earth to Mercury" << endl;

	}
	else if(character == 'b' || character == 'B')
	{
		cout << "INTERPLANETARY TRAVEL: Earth to Venus" << endl;
	}
	else if(character == 'c' || character == 'C')
	{
		cout << "INTERPLANETARY TRAVEL: Earth " << endl;
	}
	else if(character == 'd' || character == 'D' )
	{
		cout << "INTERPLANETARY TRAVEL: Earth to Mars" << endl;
	}
	else if(character == 'e' || character == 'E')
	{
		cout << "INTERPLANETARY TRAVEL: Earth to Jupitar" << endl;
	}
	else if(character == 'f' || character == 'F')
	{
		cout << "INTERPLANETARY TRAVEL: Earth to Saturn" << endl;
	}
	else if(character == 'g' || character == 'G')
	{
		cout << "INTERPLANETARY TRAVEL: Earth to Uranus" << endl;
	}
	else if(character == 'h' || character == 'H')
	{
		cout << "INTERPLANETARY TRAVEL: Earth to Neptune" << endl;
	}
	else if(character == 'q' || character == 'Q')
	{
		cout << "You have chosen to quit the program" << endl;
	}
	else
	{
		cout << "You have entered an invalid number or name" << endl;
		cout << "Please enter the planet you want to travel to" << endl;
		cin >> character;
		cout << "Please enter your weight:" << endl;
		cin >> weightOnEarth;
		cout << "Please enter your speed:" << endl;
		cin >> speedOnEarth;
	}

	system("PAUSE");
	return 0;
}
