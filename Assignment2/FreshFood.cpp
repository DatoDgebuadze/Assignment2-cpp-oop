#include "FreshFood.h"


FreshFood::FreshFood() { // default constructor 
	cout << "Enter the weight of the product->: " << endl;
	cin >> weight;
	while (weight <=0 && weight >= 100)
	{
		cout << "Please Re enter the weight(1-100): " << endl;
		cin >> weight;

	}
	cout << "Enter the unit price: " << endl;
	cin >> unitPrice;
	while (unitPrice <= 0 && unitPrice >= 100)
	{
		cout << "Please Re enter the weight(1-100): " << endl;
		cin >> unitPrice;

	}
}
// getting and initializing parameters + inherited ones
FreshFood::FreshFood(int productName, string barCode, double uPrice, double w):Product(productName, barCode) {
	unitPrice = uPrice;
	weight = w;
}
// just a show function nothiing fancy
void FreshFood::show(ostream& os){
	os << "(Freshood) Unit Price is: " << unitPrice << endl;
	os << "(Freshfood) Weight is: " << weight << endl;
	os << "Prodname: " << *productName<< endl; // just testing purposes hope i wont lose points for this, I really need points :D
	double price = unitPrice * weight;

	os << "(Freshfood) The calculated price is: " << price << endl;
}
FreshFood::~FreshFood() {};

// 3) A function called show() that displays the data members onto the
//screen or to an output file. 
// Calculate the price by multiplying the price per gram by the weight

double FreshFood::getUnitPrice() {
	return unitPrice;
}

double FreshFood::getWeight() {
	return weight;
}

