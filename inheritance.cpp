#include "inheritance.h"


double  Apartament::tax() {
	return worth / 1000;
}

double Car::tax() {
	return worth / 200;
}

double CountryHouse::tax() {
	return worth / 500;
}