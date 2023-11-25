#pragma once
#include "Product.h"


class PrePackedFood:public Product
{
public:
	PrePackedFood();   
	PrePackedFood(int, string, double);
	~PrePackedFood();

	double getUnitPrice();
	void show(ostream& os);
	

private:
	double unitPrice;
};

