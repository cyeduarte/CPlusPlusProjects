#include "OverNightPackage.h"
#include <iostream>
#include <string>
OverNightPackage::OverNightPackage()
{
	addFeePerOunce = 0.0;
}
OverNightPackage::OverNightPackage(const string &nightPackName, const string &nightPackAdd, const string &nightPackCity, 
	const string &nightPackState, const string &nightPackZip, double nightPackWeight,
						double nightPackCost, double perOunce)
						:Package(nightPackName, nightPackAdd, nightPackCity, nightPackState, nightPackZip, nightPackWeight, nightPackCost)
{
	setFeePerOunce(perOunce);
}

bool OverNightPackage:: setFeePerOunce(double perOunce)
{
	bool validData = true;
	if(perOunce <= 0)
	{
		addFeePerOunce = 0;
		validData = false;
	}
	else
	{
		addFeePerOunce = perOunce;
		validData = true;
	}
	return validData;
}

double OverNightPackage:: getFeePerOunce()const
{
	return addFeePerOunce;
}

double OverNightPackage::calculateCost()
{
	double cost;
	cost = (addFeePerOunce + Package::getCostPerOunce())  * Package::getWeight();
	return cost;
}