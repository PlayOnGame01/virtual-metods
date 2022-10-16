#pragma once
#include <iostream>
using namespace std;

class Transport {
protected:
	char* name;
	double max_speed;
	double oil;
	double col_midlle_oil; // средний расход топлива

public:
	void Consumption(double km) {
		char n[30];
		cout << "Enter name: ";
		cin.getline(n, 30);
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		cout << "Enter distance: ";
		cin >> km;

		cout << "Enter oil: ";
		cin >> oil;

		cout << "Enter maximal speed: ";
		cin >> col_midlle_oil;

		col_midlle_oil = oil / km * 100;
	}

	Transport& operator=(Transport& obj) {
		name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);

		max_speed = obj.max_speed;
		oil = obj.oil;
		col_midlle_oil = obj.col_midlle_oil;
	}

	virtual ~Transport() = 0 {
		cout << "\nTransport Destructor\n";
		delete[] name;
		max_speed = 0;
		oil = 0;
		col_midlle_oil = 0;
	}

	virtual void Print() = 0;

};


