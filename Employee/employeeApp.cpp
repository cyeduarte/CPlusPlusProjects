#include <iostream>
#include "Employee.h"
#include <string>
using namespace std;


int main()
{
	string name1 = "";
	string name2 = "";
	string name3 = "";
	string idNumber1 = "";
	string idNumber2 = "";
	string idNumber3 = "";
	string department1 = "";
	string department2 = "";
	string department3 = "";
	string position1 = "";
	string position2 = "";
	string position3 = "";
	int yearsWorked1 = 0;
	int yearsWorked2 = 0;
	int yearsWorked3 = 0;

	Employee object("Jenny Jacob", "JJ8990", "ACCOUNTING", "PRESIDENT", 15);
	Employee object2("Myron Smith", "MS7571", "IT", "Programmar", 5);
	Employee object3("Chris Raines", "CR6873", "Manufacturing", "Engineer", 30);

	cout << "Name    " << "    ID number  " << "  Department  " << "  Position  " << "  Years Worked  " << endl;
	cout << object.getName() << "    ";
	cout << object.getIdNumber() << "    ";
	cout << object.getDepartment() << "    ";
	cout << object.getPosition() << "    ";
	cout << object.getYearsWorked() << "    " << endl;
	cout << object2.getName() << "    ";
	cout << object2.getIdNumber() << "    ";
	cout << object2.getDepartment() << "            ";
	cout << object2.getPosition() << "    ";
	cout << object2.getYearsWorked() << "     " << endl;
	cout << object3.getName() << "   ";
	cout << object3.getIdNumber() << "    ";
	cout << object3.getDepartment() << "  ";
	cout << object3.getPosition() << "    ";
	cout << object3.getYearsWorked() << "    " << endl;
	system("PAUSE");
	return 0;

}
