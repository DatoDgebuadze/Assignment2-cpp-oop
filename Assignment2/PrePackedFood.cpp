#pragma once
#include "PrePackedFood.h"

PrePackedFood::PrePackedFood(int barCode, string productName, double _uPrice):Product(barCode, productName)  {
	unitPrice = _uPrice;
};

PrePackedFood::PrePackedFood() {
	cout << "Enter the unit Price: " << endl;
	cin >> unitPrice;
	while (unitPrice <= 0 || unitPrice > 99) {
		cout << "Please Re-enter the unit Price(1-99): " << endl;
		cin >> unitPrice;
	}
	
};

void PrePackedFood::show(ostream& os) {
	os << "Unit Price is: " << unitPrice <<endl;
	os << "Barcode is: " << barCode << endl;
};

PrePackedFood::~PrePackedFood(){

}

double PrePackedFood::getUnitPrice() { return unitPrice; }

