#include <string>

#include "package.h"

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

class OverNightPackage : public Package
{
	private:
		double addFeePerOunce;
	public:
		OverNightPackage();
		OverNightPackage(const string &, const string &, const string &, const string &, const string &, 
					double = 0.0, double = 0.0, double = 0.0);
		bool setFeePerOunce(double);
		double getFeePerOunce()const;
		virtual double calculateCost();
};

#endif
