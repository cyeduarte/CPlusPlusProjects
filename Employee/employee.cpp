//Christopher Eduarte
//CSIS 135
//Spring 2012;
//Homeowrk 7
#include "employee.h"
//#include <iostream>
#include <string>
using namespace std;

Employee::Employee(string n, string numID , string dep, string pos, int yrs)
{
	name = n;
	idNumber = numID; 
	department = dep;
	position = pos;
	yearsWorked = yrs;
}
Employee::Employee(string name, string idNumber)
{
	string department = " ";
	string position = " ";
	int yearsWorked = 0;
}
Employee::Employee() 
{
	string name = " ";
	string idNumber = " ";
	string departmet = " ";
	string position = " ";
	int yearsWorked = 0;
}
void Employee::setName(string n)
{
	string name = n;
}
void Employee::setIdNumber(string numID)
{
	idNumber = numID;
}
void Employee::setDepartment(string dep)
{
	department = dep;
}
void Employee::setPosition(string pos)
{
	position = pos;
}
bool Employee::setYearsWorked(int yrs)
{
	bool validData;
	if(yrs >= 0)
	{
		yrs = yearsWorked;
		validData = true;
	}
	else
	{
		validData = false;
	}
	return validData;
}
string Employee::getName()const
{
	return name;
}
string Employee::getIdNumber()const
{
	return idNumber;
}
string Employee::getDepartment()const
{
	return department;
}
string Employee::getPosition()const
{
	return position;
}
int Employee::getYearsWorked()const
{
	return yearsWorked; 
}