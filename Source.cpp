#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main() {

	TwoDayPackage package1{ "Eyup Ozmen","Sogukpinar Discrict","Tokat","Karadeniz",
	"Muhammed Bakirhan","Setbasi Disctrict","Bursa","Marmara",60100,16100,
	100,1,10 };

	package1.calculateCost();
	package1.toString();




	return 0;
}