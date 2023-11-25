#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Product {
protected:
	int barCode;
	string* productName;
public:
	Product();
	Product(int, string);
	~Product();
	virtual void show(ostream& os);
	int getBarCode();
	string getProductName();

};
