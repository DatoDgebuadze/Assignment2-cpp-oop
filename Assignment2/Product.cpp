#pragma once
#include "Product.h"



Product::Product(int _barcode, string _prodName){
	productName = new string(_prodName);
	barCode = _barcode;
}


Product::Product() {
	if (productName != NULL) {
		delete productName;
	}
	
	string name;
	cout << "Enter the name of the product ->: " << endl;
	cin >> name;
	productName = new string(name);

	cout << "Enter the barcode of the product ->: " << endl;
	cin >> barCode;

}



void Product::show(ostream& os){
	os << "Name of Product ->: " << *productName << endl;
	os << "Barcode of Product ->: " << barCode << endl;
	
}



int Product::getBarCode() { 
	return barCode; }


string Product::getProductName() {
	return *productName;
}      

Product::~Product() {
	delete productName;  // avoiding memory leaks
}