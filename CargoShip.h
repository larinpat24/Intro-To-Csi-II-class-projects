#pragma once
#include <iostream>
#include <string>
# include "Ship.h"

class CargoShip: public Ship
{
private:
	int CargoCap;
public:
//constructors 
	CargoShip(string n, string y, int c = 0):Ship(n, y)
	{
		CargoCap = c;
	}
//setters and getters 
	void setCargoCap(int c)
	{
		CargoCap = c;
	}
	int getCargoCap()
	{
		return CargoCap;
	}
	//INSERT overriden VIRTUAL PRINT FUNCTION HERE TO DISPLAY SHIP NAME AND CARGO CAP
	virtual void print() const 
	{ 
		cout<< "Ship cargo capacity is: " << CargoCap <<" and name is: " <<name<< endl;
	}

};
