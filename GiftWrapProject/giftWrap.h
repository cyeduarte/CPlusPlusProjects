
#ifndef GIFTWRAP_H
#define GIFTWRAP_H
#include <iostream>
using namespace std;

class GiftWrap
{
	private:
		double length;
		double width;
		double height;
		double taxRate;
		double pricePerInch;

	public:
		GiftWrap();
		GiftWrap(double, double);
		bool setLength(double);
		bool setWidth(double);
		bool setHeight(double);
		bool setTaxRate(double);
		bool setPricePerInch(double);
		double getLength()const;
		double getWidth()const;
		double getHeight()const;
		double getTaxRates()const;
		double getPricePerInch()const;
		double calcSubTotal()const;
		double calcTax()const;
		double calcTotal()const;
};

#endif
