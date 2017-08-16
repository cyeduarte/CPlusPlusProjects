#include <iostream>
#include "TwoDayPackage.h"
#include <string>
TwoDayPackage::TwoDayPackage()
{
	flatFee = 0.0;
}
TwoDayPackage::TwoDayPackage(const string &TwoPackName, const string &TwoPackAdd, const string &TwoPackCity, const string
		&TwoPackState, const string &TwoPackZip, double TwoPackWeight, double TwoPackCost, double flatFee)
		:Package(TwoPackName, TwoPackAdd, TwoPackCity, TwoPackState, TwoPackZip, TwoPackWeight, TwoPackCost)
{
	setFlatFee(flatFee);
}
bool TwoDayPackage:: setFlatFee(double twoPackFee)
{
	bool validData = false;
	if(twoPackFee <= 0)
	{
		validData = false;
		flatFee = 0;
	}
	else
	{
		validData = true;
		flatFee = twoPackFee;
	}
	return validData;
}

double TwoDayPackage:: getFlatFee()const
{
	return flatFee;
}

double TwoDayPackage::calculateCost()const
{
	return flatFee + Package::calculateCost();
}