#include <iostream>
#include "plane.h"
#include "boat.h"
#include "Bike.h"
#include "car.h"
using namespace std;

int main() {
	Transport* ptr = nullptr;
	int choose;
	cout << "1. Plane\n2. Bike\n3. Jeep\n4. Ship\n5->  ";
	cin >> choose;
	cin.ignore();
	switch (choose) {
	case 1:
		ptr = new plane("huge, average");
		break;
	case 2:
		ptr = new bike("small");
		break;
	case 3:
		ptr = new car("average");
		break;
	case 4:
		ptr = new boat("huge");
		break;
	}
	ptr->Consumption(0);
	ptr->Print();
	ptr->~Transport();

}
