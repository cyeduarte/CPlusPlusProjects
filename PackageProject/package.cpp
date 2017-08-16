#include <iostream>
#include "package.h"
Package::Package()
{
	name = "";
	address = "";
	city = "";
	state = "";
	zipCode = "";
	weight = 0.0;
	costPerOunce = 0.0;
}
Package::Package(const string &packName, const string &packAdd, const string &packCity, const string
		&packState, const string &packZip, double packWeight, double packCost)
{
	setName(packName);
	setAddress(packAdd);
	setCity(packCity);
	setState(packState);
	setZipCode(packZip);
	setWeight(packWeight);
	setCostPerOunce(packCost);
}
void Package::setName(const string &packageName)
{
	name = packageName;
}

string Package::getName()const
{
	return name;
}

void Package::setAddress(const string &packAddress)
{
	address = packAddress;
}
string Package::getAddress()const
{
	return address;
}
void Package::setCity(const string &packCity)
{
	city = packCity;
}
string Package::getCity()const
{
	return city;
}
void Package::setState(const string &packState)
{
	state = packState;
}
string Package::getState()const
{
	return state;
}
void Package::setZipCode(const string &packZipCode)
{
	zipCode = packZipCode;
}
string Package::getZipCode()const
{
	return zipCode;
}
bool Package::setWeight(double packageWeight)
{
	bool validData = true;
	if(packageWeight <= 0)
	{
		weight = 0;
		validData = false;
	}
	else
	{
		weight = packageWeight;
		validData = true;
	}
	return validData;
}
double Package::getWeight()const
{
	return weight;
}
bool Package::setCostPerOunce(double packageCostPerOunce)
{
	bool validData = true;
	if(packageCostPerOunce <= 0)
	{
		weight = 0;
		validData = false;
	}
	else
	{
		weight = packageCostPerOunce;
		validData = true;
	}
	return validData;
}
double Package::getCostPerOunce()const
{
	return costPerOunce;
}
		
double Package:: calculateCost()const
{
	double packageFee = weight * costPerOunce;
	return packageFee;
}