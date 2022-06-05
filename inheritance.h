#pragma once
#ifndef property_H
#define property_H

#include <iostream>
#include <string>
using namespace std;

class Property {
protected:
	double worth;

public:
	Property() {
		worth = 0;
	}
	Property(double worth) {
		this->worth = worth;
	}
	virtual double tax() = 0;
	virtual double Get()
	{ 
		return worth; 
	}
	
};

class Apartament : public Property {

public:
	Apartament() :Property() {

	}
	Apartament(double worth) :Property(worth) {

	}
	double tax() override;
};



class Car : public Property {
public:
	Car() :Property() {
	}
	Car(double worth) : Property(worth) {

	}
	double tax() override;
};

class CountryHouse : public Property {
public:
	CountryHouse() :Property() {}

	CountryHouse(double worth) : Property(worth) {

	}
	double tax() override;
};

#endif