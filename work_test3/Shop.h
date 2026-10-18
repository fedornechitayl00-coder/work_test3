#pragma once
#include <vector>
#include "Overcoat.h"

class Shop
	:public Overcoat
{
	std::vector <Overcoat> shop;
public:
	void addItem(Overcoat newItem);
	void deleteItem(Overcoat itemToDel);
	void biggerSize(Overcoat itemChangeSize);
	void findByType(std::string type);
	void sortByPrice();
};
