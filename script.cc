/*PSEUDOCODE:
1. Output "Welcome to the LOST FORTURNE" onto the monitor".
2. Output "Please answer the following questions for 
	your personalized adventure".
3. Ask the user for the number of explorers.
4. Ask the user for the number explorers lost in battle.
5. Subtract explorers from lost explorers and the numbe into 
   the memory address survive.
6. Gold is equal to 750.
7. Divide the gold by the number of survivors.
8. questGold is equal to the remainder of the gold.
9. Print out the resutls.
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int gold = 750;
	int explorers = 8;
	int explorersLost = 4;
	int survivors = explorers - explorersLost;
	double dividedGold = gold/survivors;
	double extraGold = 0;

	cout << "Welcome to the LOST FORTUNE" << endl;
	cout  << "Enter the number of explorers" << endl; 
	cin >> explorers; 
	cout << "Enter the number of explorers lost in battle"  << endl;
	cin >> explorersLost;
    survivors = explorers - explorersLost; 

	dividedGold = gold/survivors; 

	extraGold = gold % survivors;

	cout << "You have bravely led " << explorers
	    <<  "adventurers on a quest for gold." << endl 
	    <<	"The group fought a band of ogres and lost" << explorersLost << endl
	    << " Only  " << survivors
	    << " survived" << endl
	    << " The party was about to give up when they stumble upon" << endl
	    << "the forturne of 750 gold pieces. The group split the loot evenly" <<endl
	    << "and as quest leader you kept the extra " << extraGold
		<< " gold pieces." << endl;


	system("PAUSE");
	return 0;
}
