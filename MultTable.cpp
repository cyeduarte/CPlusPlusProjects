#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	char character;
	int number = 0;
	int row = 1;
	int column = 1;
	
	do
	{
		cout << "MENU" << endl;
		cout << "" << endl;
		cout << "a) Multiplication table" << endl;
		cout << "" << endl;
		cout << "q) quit program" << endl;
		cout << "" << endl;
		cout << "Please make a selection: ";
		
		cin >> character;

		if(character == 'a')
		{
			cout << "Please enter a number for your multiplication table:" << endl;

			cin >> number;

			while(number < 0)
			{
				cin >> number;
			}

			cout << "MULTIPLICATIONS TABLES " << number << " 's" << endl;
			cout << endl;
			
			for (int row = 1; row <=number; row++)
				cout << setw(5) << row << "";
			for (int row = 1; row <= number; row++)
			{
				cout << endl;
				cout << row << "|";
				for (int col = 1; col <= number; col++)
				{

					cout << setw(4) << col * row <<"|";
					
				}
				cout << endl;
				for(int col = 1; col <= number; col ++)
				{
					cout << "------";
				}
			} 

			cout << endl;		
		}
		else
		{
			cout << "Invalid selection" << endl;
			cout << "please enter again" << endl;
			cin >> character; 
		}

	}while(character != 'q');

	cout << "You have chosen to quit the program. Thank you for using it!";
	//system("PAUSE");
	return 0;
}