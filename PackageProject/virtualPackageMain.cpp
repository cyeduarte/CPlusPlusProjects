#include <iostream>
#include "package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"
using namespace std;

int main()
{
	const int MAX = 5;
	char input; 
	/*Package packagePointer;
	TwoDayPackage twoDayPackagePointer;
	OverNightPackage overNightPackagePointer;
	 
	Package *ary[MAX];*/

	do
	{
		cout << "You have decided to use the package pointer program. Please select the following." << endl;
		cout << "1) To use the  program" << endl;
		cout << "q) to quit the program" << endl;
		cout << "" << endl;

		if(input == '1')
		{
			/*for(int index = 0; index <= MAX; index++)
			{
				ary[index] = &packagePointer;
				ary[index] = &twoDayPackagePointer;
				ary[index] = &overNightPackagePointer;
			}*/
		}
		else
		{
			cout << "You have entered an invalid selection. Please try again." << endl;
			cin >> input;
		}
	while(input != 'q' || input != 'Q');
	cout << "address" << endl;

	cout << "You have decided to quit the program. Thank you for using the program." << endl;
	system("pause");
	return 0;
}