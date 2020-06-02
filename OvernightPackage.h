#pragma once
#include "Package.h"

class OvernightPackage : public Package {
public:
		OvernightPackage(const string& s_name, const string& s_adress, const string& s_city, const string& s_state, 
		const string& r_name, const string& r_adress, const string& r_city, const string& r_state,double s_zipcode=0.0, double r_zipcode=0.0,
		double p_weight=0.0, double costpounce=0.0,double addfee=0.0);

		void setAdditionalFee(double);
		double getAdditionalFee()const;

		double calculateCost()const;
		string toString()const;
private:	

	double additional_fee;
};
