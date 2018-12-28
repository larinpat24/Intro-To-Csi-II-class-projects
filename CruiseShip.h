#pragma once
# include "Ship.h"
#ifndef CRUISESHIP_H
#define CRUISESHIP_H
using namespace std;
#include <string>

class CruiseSHip:public Ship
{
private:
	int maxNumberOfNumber;
public:
	//Constructors 
	CruiseSHip(string n, string y, int m = 0):Ship(n, y)
	{
		maxNumberOfNumber = m;
	}
	//setters or getters 
	void setmaxNumberofNumberi(int m)
	{
		maxNumberOfNumber = m;
	}
	int getMax()
	{
		return maxNumberOfNumber;
	}
	//INSERT overriden VIRTUAL PRINT FUNCTION HERE TO DISPLAY SHIP NAME AND MAX NUMBER OF PEOPLE
	virtual void print() const 
	{
		cout << "Ship max # of passengers is: " << maxNumberOfNumber <<" and name is: "<<name<<endl;

	}
};
#endif

