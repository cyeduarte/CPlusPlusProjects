#include <iostream>
#include "integerSets.h"
using namespace std;

int main()
{
	IntegerSet sets;
	IntegerSet a, b;
	int size = 10;
	int arrSize[] = {8, 10, 12, 13, 14, 20, 11, 5, 9};

	sets.unionSets(a, b);

	sets.interSet(a, b);

	sets.insertElement(8);

	sets.deleteElement(8);

	sets.isEqual(10, a);

	//sets.printSet(10);

	//IntegerSet(size[8], 8);

	cout << "Integer Set Results" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
	cout << "set: ";
    sets.printSet(10);
	

	system("pause");
	return 0;
}