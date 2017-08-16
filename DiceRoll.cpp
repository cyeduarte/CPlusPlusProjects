
/*Pseudocode:
1. Declare the variables times and random number generations
2. Ask the user how many times they would like to roll the dice.
3. Use input validations so the user cannot enter a value less
   than one.
3. Calculate the number of rolls detected.
4. Display the report for dice roll landings for each number and 
   the percentage of times the roll landed on those numbers.
5. 
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int rollDice;
	int times = 0;
	srand ((unsigned int) time(NULL));
	rollDice = rand() % 6 + 1;


	cout << "How many times would you like to roll the dice?" << endl;
	cin >> rollDice;

	while(times < 0)
	{
		cout << "This is an invalid number." << endl;
		cout << "The number of rolls should be equal to or greater than 1." << endl;
		cout << "Please enter again." << endl;
		cin >> times; 
	}

	cout << rollDice ;

	cout << "DICE ROLL STATISTICS" << endl;
	cout << "" << endl;
	cout <<"#rolled Times/t";
	cout <<"#times Times/t";
	cout << "#% Times" << endl;
	cout << "--------\t";
	cout << "--------\t";
	cout << "--------\t" << endl;
	cout << times << "\t";
	cout << ++rollDice;

	
	system("PAUSE");
	return 0;
}
