#pragma once
#include "Product.h"


// in this version of the assignment I added validation and comments
Product::Product(int _barcode, string _prodName){
	productName = new string(_prodName);
	barCode = _barcode;

	// parametrized constructor holding parameters for barcode and prodname which are stored in data memebers so easily said input goes and getting stored in data members
}


Product::Product() {
	if (productName != NULL) {
		delete productName;

		// for the safe state purpose making sure pointer does point to anything
	}

	string name;
	cout << "Enter the name of the product ->: " << endl;
	cin >> name;

	// dynamic memory allocatin for name data pointer member points at name location

	productName = new string(name);

	// more boring validations
	if (name.empty()) {
		cout << "Input for name is empty Please Re-Enter: " << endl;
		getline(cin, name);
		
	}
	cout << "Enter the barcode of the product ->: " << endl;
	cin >> barCode;
	// more validation

	while (cin.fail() || barCode <=0 || barCode > 999) // I've been trying to solve the issue but i cant if you input in between the scope but do (2jnjfgk) code will just see 2 not the rest
		// I researched and found out it is related to cin.fail it will be scraping of int and ignore the rest as i remember
	{
		cout << "Barcode is outside of the Scope, Re-Enter ->:(0-999) " << endl;
		cin >> barCode;
	
	
		cin.clear();
		cin.ignore(80, '\n');
	
	
	}
	

	
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
	if (productName != nullptr) {
		delete productName;
	}  // avoiding memory leaks
}