#include "giftWrap.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	char select = 'a';
	string sallyStore = "Sally's Gifts";
	double wrapperLength = 0.0;
	double wrapperWidth = 0.0;
	double wrapperHeight = 0.0;

	GiftWrap sally(0.0925, 0.0025);

	do
	{
		cout << "GIFT WRAP VOICE GENERATOR" << endl;
		cout << "a)Generate Gift Wrap Invoice" << endl;
		cout << "q)quit program" << endl;
		cin >> select;

		if(select == 'a' || select == 'A')
		{
			cout << "Please enter the length of the wrapper" << endl;
			cin >> wrapperLength;
			sally.setLength(wrapperLength);

			cout << "Please enter the width of the wrapper" << endl;
			cin >> wrapperWidth;
			sally.setWidth(wrapperWidth);
			
			cout << "Please enter the height of the wrapper" << endl;
			cin >> wrapperHeight;
			sally.setHeight(wrapperHeight);

			cout << "GIFT WRAP INVOICE - " << sallyStore << endl;
			cout << "-----------------------------------" << endl;
			cout << "Box Length:     " << setprecision(2) <<  sally.getLength() << endl;
			cout << "Box Width:      " << setprecision(2) << sally.getWidth() << endl;
			cout << "Box Height:     " << setprecision(2) << sally.getHeight() << endl;
			cout << "Price Per Inch  " << setprecision(4) << sally.getPricePerInch() << endl;
			cout << "" << endl;
			cout << "Subtotal:       " << setprecision(2) << sally.calcSubTotal() << endl;
			cout << "TAX:            " << setprecision(2) << sally.calcTax() << endl;
			cout << "               --------" << endl;
			cout << "Total:          " << setprecision(3) << sally.calcTotal() << endl;
			

		}
		else if(select == 'q' || select == 'Q')
		{
			cout << "You have decided to leave the program. Thank you for using it." << endl;
		}
		else
		{
			cout << "You have chosen an invalid selection. Please choose again. " << endl;
		}

	}
	while(select != 'q' && select != 'Q');


	system("PAUSE");
	return 0;

}
