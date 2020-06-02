#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string& s_name, const string& s_adress, const string& s_city, const string& s_state, 
	const string& r_name, const string& r_adress, const string& r_city, const string& r_state, double s_zipcode, double r_zipcode,
	double p_weight, double costpounce, double extrafee)
	:Package(s_name,s_adress,s_city,s_state,
		r_name,r_adress,r_city,r_state, s_zipcode, r_zipcode,
		p_weight,costpounce)
{
	setFlatFee(extrafee);
}

void TwoDayPackage::setFlatFee(double extrafee)
{
	if (extrafee < 0.0) {
		throw invalid_argument("Flat fee must be >= 0.0");
	}
	flat_fee = extrafee;
}

double TwoDayPackage::getFlatFee() const
{
	return flat_fee;
}

double TwoDayPackage::calculateCost() const
{
	return getFlatFee() + Package::calculateCost();
}

string TwoDayPackage::toString() const
{
	ostringstream output;
	output << fixed << setprecision(2);
	output << "Sender Info:\n"
		<< getSenderName() << ' ' << getSenderAdress() << ' '
		<< getSenderCity() << ' ' << getSenderState() << ' '
		<< getSenderZipCode() << "\nRecipient Info:\n"
		<< getRecipientName() << ' ' << getRecipientAdress() << ' '
		<< getRecipientCity() << ' ' << getRecipientState() << ' '
		<< getRecipientZipCode() << "\nCost for shipment:\n"
		<< calculateCost();

	return output.str();
}


