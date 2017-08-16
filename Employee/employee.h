#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
	private:
		string name;
		string idNumber;
		string department;
		string position;
		int yearsWorked; 
	public:
		Employee(string, string, string, string, int);
		Employee(string, string);
		Employee();
		void setName(string);
		void setIdNumber(string);
		void setDepartment(string);
		void setPosition(string);
		bool setYearsWorked(int);
		string getName()const;
		string getIdNumber() const;
		string getDepartment() const;
		string setPosition() const;
		string getPosition() const;
		int getYearsWorked() const;
};

#endif
