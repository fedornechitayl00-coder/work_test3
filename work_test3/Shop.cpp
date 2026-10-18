#include "Shop.h"
#include <algorithm>

void Shop::addItem(const Overcoat& newItem)
{
	shop.push_back(newItem);
}

void Shop::deleteItem(const Overcoat& itemToDel)
{
	for (int i = 0; i < shop.size(); ++i) {
		if (shop[i] == itemToDel) {
			shop[i] = shop.back();
			shop.pop_back();
		}
	}
}

void Shop::biggerSize(Overcoat itemChangeSize)
{
	if(overcoatSize < 7 && overcoatSize > 1) itemChangeSize.overcoatSize++;
}

void Shop::findByType(std::string type)
{
	for (int i = 0; i < shop.size(); ++i) {
		if (shop[i].type == type) {
			std::cout << "founded:";
			shop[i].showInfo();
		}
		else if (i == shop.size()) {
			std::cout << "nothing found";
		}
	}
}

void Shop::sortByPrice()
{
	std::sort(shop.begin(), shop.end(), [](const Overcoat& a, const Overcoat b) {return a.price < b.price; });
}
