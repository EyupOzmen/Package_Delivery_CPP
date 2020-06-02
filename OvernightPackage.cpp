#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string& s_name, const string& s_adress, const string& s_city, const string& s_state,  
	const string& r_name, const string& r_adress, const string& r_city, const string& r_state, double s_zipcode, double r_zipcode,
	double p_weight, double costpounce, double addfee)
	:Package(s_name, s_adress, s_city, s_state, 
		r_name, r_adress, r_city, r_state, s_zipcode, r_zipcode,
		p_weight, costpounce)
{
	setAdditionalFee(addfee);
}

void OvernightPackage::setAdditionalFee(double addfee)
{
	if (addfee < 0.0) {
		throw invalid_argument("Additional fee must be >= 0.0");
	}
	additional_fee = addfee;
}

double OvernightPackage::getAdditionalFee() const
{
	return additional_fee;
}

double OvernightPackage::calculateCost() const
{
	return getAdditionalFee()*getCostPerOunce() + Package::calculateCost();
}
