
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
#include <iostream>
using namespace std;

int main()
{
	//Getting the user input
	string n, y;
	int m, c;
	cout << "What is the name, of the ship?" << endl;
	getline(cin, n);
	cout << "What is the year the ship was built?" << endl;
	getline(cin, y);
	cout << "What is the maximun number of passengers this ship can have?" << endl;
	cin >> m;
	cout << "What is the cargo capacity in tonnage that the ship can have?" << endl;
	cin >> c;

	//Create an array of Ship pointers and initiliaze it with the address of a Ship, CruiseShip, and CargoShip object.
	Ship *arrayShips[3] =
	{
	new Ship(n, y),
	new CruiseSHip(n, y, m),
	new CargoShip(n, y, c)
	};
	//Now the Ship, CruiseShip, and CargoShip objects print function through an array (using the shipe pointers that point to it).
	int i;
	for (i = 0; i < 3; i++)
	{
		arrayShips[i]->print();
	}
	system("pause");
}
