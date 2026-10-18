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
	auto itemType = std::find_if(shop.begin(), shop.end(), [&type](const Overcoat& item) {return item.type == type; });
	if (itemType != shop.end()) {
		std::cout << "\nFinded item:" << itemType->type << "\n";
	}
	else {
		std::cout << "\nnot found\n";
	}
}

void Shop::sortByPrice()
{
	std::sort(shop.begin(), shop.end(), [](const Overcoat& a, const Overcoat b) {return a.price < b.price; });
}
