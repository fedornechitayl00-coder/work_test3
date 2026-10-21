#pragma once
#include <iostream>
#include <string>

class Overcoat
{
protected:
	std::string name;
	std::string type;
	int overcoatSize;
	float price;
	int number;
public:
	Overcoat();
	Overcoat(std::string name, std::string type, int overcoatSize, float price,int number = 1);

	std::string getName() const;
	void setName(std::string name);
	std::string getType() const;
	void setType(std::string type);
	int getOvercoatSize() const;
	void setOvercoatSize(int size);
	float getPrice() const;
	void setPrice(float price);

	void showSize() const;
	void showInfo() const;

	bool operator==(const Overcoat& obj) const&;
	bool operator!=(const Overcoat& obj) const&;
	bool operator>(const Overcoat& obj) const&;
	bool operator<(const Overcoat& obj) const&;
	bool operator>=(const Overcoat& obj) const&;
	bool operator<=(const Overcoat& obj) const&;
	Overcoat& operator -=(int value);
	Overcoat& operator +=(int value);
	Overcoat& operator++();
	Overcoat operator++(int);
	Overcoat& operator--();
	Overcoat operator--(int);
	friend std::ostream& operator<<(std::ostream& out, const Overcoat& obj);
	friend std::istream& operator>>(std::istream& in, Overcoat& obj);


};

