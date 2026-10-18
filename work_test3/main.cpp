#include "Overcoat.h"
#include "Shop.h"


int main()
{
	Overcoat A("coat", "female", 3, 900, 1001);
	Overcoat B("jeans", "female", 3, 1200, 1002);
	Overcoat C("T-shirt", "male", 5, 800, 1003);
	A.showInfo();
	B.showInfo();
	C.showInfo();
	Shop bought;
	bought.addItem(A);
	bought.addItem(B);
	bought.addItem(C);
	bought.biggerSize(A);
	bought.findByType("female");
	bought.sortByPrice();
	
}