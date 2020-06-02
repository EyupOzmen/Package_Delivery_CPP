#include "Package.h"


Package::Package(const string& s_name, const string& s_adress, const string& s_city, const string& s_state, 
	const string& r_name, const string& r_adress, const string& r_city, const string& r_state, double s_zipcode, double r_zipcode, double p_weight, double costpounce)
	:sender_name(s_name),sender_address(s_adress),sender_city(s_city),sender_state(s_state),
	recipient_name(r_name),recipient_address(r_adress),recipient_city(r_city),recipient_state(r_state), sender_zipcode(s_zipcode), recipient_zipcode(r_zipcode)
{
	setWeight(p_weight);
	setCostPerOunce(costpounce);
}

void Package::setSenderName(const string& s_name)
{
	sender_name = s_name;
}

string Package::getSenderName() const
{
	return sender_name;
}

void Package::setSenderAdress(const string& s_adress)
{
	sender_address = s_adress;
}

string Package::getSenderAdress() const
{
	return sender_address;
}

void Package::setSenderCity(const string& s_city)
{
	sender_city = s_city;
}

string Package::getSenderCity() const
{
	return sender_city;
}

void Package::setSenderState(const string& s_state)
{
	sender_state = s_state;
}

string Package::getSenderState() const
{
	return sender_state;
}

void Package::setSenderZipCode(double s_zipcode)
{
	sender_zipcode = s_zipcode;
}

double Package::getSenderZipCode() const
{
	return sender_zipcode;
}

void Package::setRecipientName(const string& r_name)
{
	recipient_name = r_name;
}

string Package::getRecipientName() const
{
	return recipient_name;
}

void Package::setRecipientAdress(const string& r_adress)
{
	recipient_address = r_adress;
}

string Package::getRecipientAdress() const
{
	return recipient_address;
}

void Package::setRecipientCity(const string& r_city)
{
	recipient_city = r_city;
}

string Package::getRecipientCity() const
{
	return recipient_city;
}

void Package::setRecipientState(const string& r_state)
{
	recipient_state = r_state;
}

string Package::getRecipientState() const
{
	return recipient_state;
}

void Package::setRecipientZipCode(double r_zipcode)
{
	recipient_zipcode = r_zipcode;
}

double Package::getRecipientZipCode() const
{
	return recipient_zipcode;
}

void Package::setWeight(double p_weight)
{
	if (p_weight <= 0.0) {
		throw invalid_argument("Weight must be > 0.0");
	}
	weight = p_weight;
}

double Package::getWeight() const
{
	return weight;
}

void Package::setCostPerOunce(double costpounce)
{
	if (costpounce <= 0.0) {
		throw invalid_argument("Cost per ounce must be > 0.0");
	}
	cost_per_ounce = costpounce;
}

double Package::getCostPerOunce() const
{
	return cost_per_ounce;
}

double Package::calculateCost() const
{
	return getWeight()*getCostPerOunce();
}

string Package::toString() const
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
