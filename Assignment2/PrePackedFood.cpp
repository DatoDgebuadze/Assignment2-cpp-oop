#pragma once
#include "PrePackedFood.h"

PrePackedFood::PrePackedFood(int barCode, string productName, double _uPrice):Product(barCode, productName)  {
	unitPrice = _uPrice;
};

PrePackedFood::PrePackedFood() {
	cout << "Enter the unit Price: " << endl;
	cin >> unitPrice;
	
};

void PrePackedFood::show(ostream& os) {
	os << "Unit Price is: " << unitPrice <<endl;
	os << "Barcode is: " << barCode << endl;
};

PrePackedFood::~PrePackedFood(){

}

double PrePackedFood::getUnitPrice() { return unitPrice; }

