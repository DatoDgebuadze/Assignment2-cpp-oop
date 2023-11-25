#pragma once
#include "Product.h"
class FreshFood:public Product
{
public:
	FreshFood();
	FreshFood(int, string, double, double);
	~FreshFood();

	void show(ostream& os);
	double getUnitPrice();
	double getWeight();

private:
	double unitPrice;
	double weight;
};

