#pragma once
#include "Transport.h"

class boat : public Transport {
	char* size;

public:
	boat(const char* s) {
		size = new char[strlen(s) + 1];
		strcpy_s(size, strlen(s) + 1, s);
	}

	boat& operator=(const boat& obj) {
		name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);

		max_speed = obj.max_speed;
		oil = obj.oil;
		col_midlle_oil = obj.col_midlle_oil;

		size = new char[strlen(obj.size) + 1];
		strcpy_s(size, strlen(obj.size) + 1, obj.size);

		return *this;
	}

	~boat() {
		cout << "\nShip Destructor" << endl;
		delete[] size;
	}

	void Print() {
		cout << "\n\nName of transport: " << name << endl;
		cout << "Average oil 100 km: " << col_midlle_oil << "l" << endl;
		cout << "Maximal speed of transport: " << max_speed << "km" << endl;
		cout << "Size of " << name << ": " << size << endl;
	}

};


