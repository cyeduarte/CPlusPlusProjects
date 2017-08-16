
#include "OverNightPackage.h"
#include "TwoDayPackage.h"
#include "package.h"

#include <iostream>
using namespace std;


int main()
{
	char input;
	Package pack;
	OverNightPackage nightPack;
	TwoDayPackage twoDayPack;
    string name;
	string address;
	string city;
	string state;
	string zipCode;
	double weight;
	double costPerOunce;

	do
	{
		cout << "Delivery program:" << endl;
		cout << "1)for package" << endl;
		cout << "2)To find out the total cost" << endl;
		cout << "q)To exit the program" << endl;

		cin >> input;

		if(input == '1')
		{
			cout << "Please enter the following: name, address, city, state, and zipCode. ";
			cin >> name >> address >> city >> state >> zipCode;
		
			cout << "Please enter the weight and cost" << endl;
			cin >> weight >> costPerOunce;

			Package(name, address, city, state, zipCode, weight, costPerOunce);

			cout << "would you like a two day package or an overnight package" << endl;
			cout << "1)two day package" << endl;
			cout << "2)overnight package" << endl;
			cout << "N)no" << endl;

			if(input == '1')
			{
				double flatFee = 3.00;
				
				TwoDayPackage(name, address, city, state, zipCode, weight, costPerOunce, flatFee);
			}
			else if(input == '2')
			{
				double additionalFeePerOunce = 2.50;

				OverNightPackage(name, address, city, state, zipCode, weight, costPerOunce, 
					additionalFeePerOunce);
			}
			else if(input == 'N' || input == 'n')
			{
			}

		}
		else if(input == '2')
		{
			cout << "Cost for Package: " << endl;
			cout << "package cost: " << pack.calculateCost();
			cout << "Two Day Package cost: " << twoDayPack.calculateCost();
			cout << "Overnight Package cost: " << nightPack.calculateCost();

		}
		else if(input == 'q' || input == 'Q')
		{
			cout << "You have decided to exit the program."
			     << "Thank you for using the program." << endl;
		}
		else
		{
			cout << "You have entered an invalid choice." 
				<< "Please try again." << endl;
			cin >> input;
		}

	}while(input != 'q' && input != 'Q');
	
	system("pause");
	return 0;
	
}
