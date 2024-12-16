#include "mytemperature.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double cel, fah;
	std::cout << std::fixed;
	std::cout << " Celsius    Fahrenheit   |   Fahrenheit    Celsius" << std::endl;
	std::cout << std::setprecision(1) << "  40.0	      " << celsius_to_fah(40.0)
		<< "      |     "
		<< std::setprecision(2) << "120.0        "  << fahrenheit_to_cels(120.0 )<< std::endl;
	std::cout << std::setprecision(1) << "  39.0	      " << celsius_to_fah(39.0)
		<< "      |     "
		<< std::setprecision(2) << "110.0        " << fahrenheit_to_cels(110.0) << std::endl;
	std::cout << std::setprecision(1) << "   бнбн	       " << "бнбн"
		<< "        |       "
		<< std::setprecision(2) << "бнбн          " << "бнбн" << std::endl;
	std::cout << std::setprecision(1) << "  31.0	      " << celsius_to_fah(31.0)
		<< "       |      "
		<< std::setprecision(2) << "30.0        " << fahrenheit_to_cels(30.0) << std::endl;
	return 0;
}

