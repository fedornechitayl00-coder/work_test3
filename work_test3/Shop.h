#pragma once
#include <vector>
#include "Overcoat.h"

class Shop
	:public Overcoat
{
	std::vector <Overcoat> shop;
public:
	void addItem(const Overcoat& newItem);
	void deleteItem(const Overcoat& itemToDel);
	void biggerSize(Overcoat itemChangeSize);
	void findByType(std::string type);
	void sortByPrice();
};
