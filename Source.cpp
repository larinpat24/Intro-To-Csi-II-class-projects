#include <iostream>
#include <string>
using namespace std;
//Niral Patel 
//Employee and Production Worker Classes 

//base class Employee
class Employee {
private:
	string name_employee;
	int number_employee;
	string hire_date;

public:
	//constructor (includes default and overloaded)
	Employee()
	{
		string n = " "; int num = 0; string d = " ";
	}
	Employee(string n , int num , string d )
	{
		name_employee = n;
		number_employee = num;
		hire_date = d;
	}
	//accessor function
	void set_name_employee(string n)
	{
		name_employee = n;
	}
	void set_number_employee(int num)
	{
		number_employee = num;
	}
	void set_hire_date(string d)
	{
		hire_date = d;
	}
	string get_name_employee()
	{
		return name_employee;
	}
	int get_number_employee()
	{
		return number_employee;
	}
	string get_hire_date()
	{
		return hire_date;
	}
};

//Derived class ProductionWorker, bass class is Employee

//Derived Class
class ProductionWorker :public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:
	//default constructor 
	ProductionWorker() :Employee()
	{
		shift = 0;
		hourlyPayRate = 0;
	}

	//overloadedconstructor 
	ProductionWorker(int s, double h, string n, int num, string d) :Employee(n, num, d)
	{
		shift = s;
		hourlyPayRate = h;
	}
	//mutators 
	void setShift(int s)
	{
		shift = s;
	}
	void sethrlyPay(double h)
	{
		hourlyPayRate = h;
	}
	//accessors
	int getshift()
	{
		return shift;
	}
	double gethrlypay()
	{
		return hourlyPayRate;
	}

};
int main()
{
	string name, hire_date;
	int number;
	int shiftType = 0;
	double hPayRate = 0.0;
	string shiftWords;
	cout << "What is the employee's name? " << endl;
	getline(cin, name);
	cout<<"What is their number, and hire date ? " << endl;
	cin>> number >> hire_date;

	cout << "What is the employee's shift? Enter 1 for day or 2 for night" << endl;
	cin >> shiftType;
	//Input validation for the Shift
	while (!(shiftType == 1 || shiftType == 2))
	{
		cout << "You entered the Employee's shift wrong, try again" << endl;
		cin >> shiftType;
	}
	if (shiftType == 1)
	{
		shiftWords = "Day Shift";
	}
	else  
	{
		shiftWords = "Night Shift";
	}
	
	
	cout << "Enter in the Employee's Hourly pay rate" << endl;
	cin >> hPayRate;
	cout << endl;
	//Now display the information  
	cout<<"Here are the Employee's details" << endl;
	ProductionWorker Employee1(shiftType, hPayRate, name, number, hire_date);
	cout << "Employee Name: " << Employee1.get_name_employee() << endl;
	cout << "Employee Number: " << Employee1.get_number_employee() << endl;
	cout << "Employee Hire Date: " << Employee1.get_hire_date() << endl;
	cout << "Employee's Shift Type: " << Employee1.getshift()<<" which is, "<<shiftWords<< endl;
	cout << "Employee Hourly Pay Rate: " << Employee1.gethrlypay() << endl;

	system("pause");
	return 0;
}