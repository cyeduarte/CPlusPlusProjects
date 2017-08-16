//Christopher Eduarte//CSIS 137
//Homework 4
//CSIS 137

#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

class Package
{
	private:
		string name;
		string address;
		string city;
		string state;
		string zipCode;
		double weight;
		double costPerOunce;

	public:
		Package();
		Package(const string &, const string &, const string &, const string &, const string &, double = 0.0, double = 0.0);
		void setName(const string &);
		string getName()const;
		void setAddress(const string &);
		string getAddress()const;
		void setCity(const string &);
		string getCity()const;
		void setState(const string &);
		string getState()const;
		void setZipCode(const string &);
		string getZipCode()const;
		bool setWeight(double);
		double getWeight()const;
		bool setCostPerOunce(double);
		double getCostPerOunce()const;
		virtual double calculateCost()const;
		

};

#endif