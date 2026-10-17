#pragma once
#include <iostream>
#include <string>

class Overcoat
{
protected:
	std::string name;
	std::string type;
	std::string overcoatSize;
	float price;
	static int number;
public:
	Overcoat();
	Overcoat(std::string name, std::string type, std::string overcoatSize, float price);

	std::string getName() const;
	void setName(std::string name);
	std::string getType() const;
	void setType(std::string type);
	std::string getOvercoatSize() const;
	void setOvercoatSize(std::string size);
	float getPrice() const;
	void setPrice(float price);

	void showInfo() const;

	bool operator==(const Overcoat& obj) const&;
	bool operator!=(const Overcoat& obj) const&;
	bool operator>(const Overcoat& obj) const&;
	bool operator<(const Overcoat& obj) const&;
	bool operator>=(const Overcoat& obj) const&;
	bool operator>=(const Overcoat& obj) const&;
	Overcoat& operator++();
	Overcoat operator++(int);
	Overcoat& operator--();
	Overcoat operator--(int);
	friend std::ostream& operator<<(std::ostream& out, const Overcoat& obj);
	friend std::istream& operator>>(std::ostream& in, const Overcoat& obj);


};

int number = 0;