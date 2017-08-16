#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string>

#include "package.h"

class TwoDayPackage : public Package
{
	private:
		double flatFee;
	public:
		TwoDayPackage();
		bool setFlatFee(double);
		double getFlatFee()const;
		TwoDayPackage(const string &, const string &, const string &, 
					const string &, const string &, double = 0.0, double = 0.0, double = 0.0);
		virtual double calculateCost()const;

};

#endif
