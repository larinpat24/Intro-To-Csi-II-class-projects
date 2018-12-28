#pragma once
#ifndef SHIP_H
#define SHIP_H
#include <string>
#include <iostream>
using namespace std;


class Ship
{
protected:
	string name = " ";
	string year = " ";

public:
//Constructor 
	Ship(string n = " ", string y = " ")
	{
		name = n;
		year = y;
	}

// setters or mutators 
	void setName(string n)
	{
		name = n;
	}
	void setYear(string y)
	{
		year = y;
	}
//getters or accessors 
	string getName()
	{
		return name;
	}
	string getYear()
	{
		return year;
	}
//INSERT VIRTUAL PRINT FUNCTION HERE TO DISPLAY SHIP NAME AND YEAR
	virtual void print() const
	{
		cout << "Ship was bulit in year: "<<year<<" and Ship name is: "<<name<<endl;
		
	}
};
#endif  
