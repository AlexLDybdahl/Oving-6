#include "std_lib_facilities.h"
#include "debug.h"


string getCapital(const string& country) {
	return capitalsMap.at(country);
}