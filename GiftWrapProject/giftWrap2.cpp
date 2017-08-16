
#include "giftWrap.h"
#include <iostream>
//using namespace std;
GiftWrap::GiftWrap()
{
	double length = 1.0;
	double width = 1.0;
	double height = 1.0;
	double pricePerInch = 0.0036;
	double taxRate = 0.008;
}
GiftWrap::GiftWrap(double taxR, double pRI)
{

	if(taxR >= 0)
	{
		taxRate = taxR;
	}
	else
	{
		taxRate = 0.0;
	}

	if(pRI >= 0)
	{
		pricePerInch = pRI;
	}
	else
	{
		pricePerInch = 0.0;
	}
	
	double length = 1.0;
	double width = 1.0;
	double height = 1.0;
}
bool GiftWrap::setLength(double len)
{
	bool validData;
	if(len >= 0)
	{
		length = len;
		validData = true;
	}
	else
	{
		validData = false;
	}
	return validData;
}
bool GiftWrap::setWidth(double wid)
{
	bool validData;
	if(wid >= 0)
	{
		width = wid;
		validData = true;
	}
	else
	{
		validData = false;
	}
	return validData;
}
bool GiftWrap::setHeight(double het)
{
	bool validData;
	if(het >= 0)
	{
		height = het;
		validData = true;
	}
	else
	{
		validData = false;
	}
	return validData;
}
bool GiftWrap::setTaxRate(double tr)
{
	bool validData;
	if(tr < 0 || tr > 1)
	{
		taxRate = tr;
		validData = true;
	}
	else
	{
		validData = false;
	}
	return validData;
	
}
bool GiftWrap::setPricePerInch(double priceInch)
{
	bool validData;
	if(priceInch < 0)
	{
		pricePerInch = priceInch;
		validData = true;
	}
	else
	{
		validData = false;
	}
	return validData;
}
double GiftWrap::getLength()const
{
	return length;
}
double GiftWrap::getWidth()const
{
	return width;
}
double GiftWrap::getHeight()const
{
	return height;
}
double GiftWrap::getTaxRates()const
{
	return taxRate;
}
double GiftWrap::getPricePerInch()const
{
	return pricePerInch;
}
double GiftWrap::calcSubTotal()const
{
	double surfaceArea = (2 * length * width) + (2 * length * height) + (2 * width * height);
	double subTotal = surfaceArea * pricePerInch;
	return subTotal;
}
double GiftWrap::calcTax()const
{
	double subTotal= calcSubTotal();
	double tax = subTotal * taxRate;
	return tax;
}
double GiftWrap::calcTotal()const
{
	double subTotal = calcSubTotal();
	double tax = calcTax();
	double total = subTotal + tax;
	return total;
}
