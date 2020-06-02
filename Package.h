#pragma once
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <sstream>

using namespace std;

class Package {
public:
	//Constructor
	Package(const string& s_name, const string& s_adress,const string& s_city,const string& s_state, 
		    const string& r_name,const string& r_adress,const string& r_city,const string& r_state, double s_zipcode = 0.0, double r_zipcode=0.0,
		    double weight=0.0, double costpounce=0.0);
	//Set and Get for sender
	void setSenderName(const string&);
	string getSenderName()const;

	void setSenderAdress(const string&);
	string getSenderAdress()const;

	void setSenderCity(const string&);
	string getSenderCity()const;

	void setSenderState(const string&);
	string getSenderState()const;

	void setSenderZipCode(double);
	double getSenderZipCode()const;

	//Set and Get for recipient
	void setRecipientName(const string&);
	string getRecipientName()const;

	void setRecipientAdress(const string&);
	string getRecipientAdress()const;

	void setRecipientCity(const string&);
	string getRecipientCity()const;

	void setRecipientState(const string&);
	string getRecipientState()const;

	void setRecipientZipCode(double);
	double getRecipientZipCode()const;

	//Set and get for utilities 
	void setWeight(double);
	double getWeight()const;

	void setCostPerOunce(double);
	double getCostPerOunce()const;

	//calculate cost for shipping

	double calculateCost() const;
	
	//display info

	string toString() const;

private:
	string sender_name;
	string sender_address;
	string sender_city;
	string sender_state;
	double sender_zipcode;
	string recipient_name;
	string recipient_address;
	string recipient_city;
	string recipient_state;
	double recipient_zipcode;

	double weight;
	double cost_per_ounce;

};
