#include "Overcoat.h"

Overcoat::Overcoat()
{
    name = "noname";
    type = "undefined";
    overcoatSize = "noname";
    price = 0.0f;
}

Overcoat::Overcoat(std::string name, std::string type, std::string overcoatSize, float price)
{
}

std::string Overcoat::getName() const
{
    return name;
}

void Overcoat::setName(std::string name)
{
    if(!name.empty()) this->name = name;
}

std::string Overcoat::getType() const
{
    return type;
}

void Overcoat::setType(std::string type)
{
    if(!type.empty()) this->type = type;
}

std::string Overcoat::getOvercoatSize() const
{
    return overcoatSize;
}

void Overcoat::setOvercoatSize(std::string size)
{
    this->overcoatSize = overcoatSize;
}

float Overcoat::getPrice() const
{
    return price;
}

void Overcoat::setPrice(float price)
{
    if (price > 0) this->price = price;
}

void Overcoat::showInfo() const
{
    std::cout << "\nname:" << getName() <<
        "\ntype:" << getType() <<
        "\nsize:" << getOvercoatSize() <<
        "\nprice:" << getPrice() <<
        "\nnumber:" << number;
}

bool Overcoat::operator==(const Overcoat& obj) const&
{
    if (this->type == obj.type) return true;
    else return false;
}

bool Overcoat::operator!=(const Overcoat& obj) const&
{
    return !(*this == obj);
}

bool Overcoat::operator>(const Overcoat& obj) const&
{
    if (this->price > obj.price) return true;
    else return false;
}

bool Overcoat::operator<(const Overcoat& obj) const&
{
    return !(*this > obj);
}

bool Overcoat::operator>=(const Overcoat& obj) const&
{
    return (*this > obj) || (*this == obj);
}

Overcoat& Overcoat::operator++()
{
    (*this) += 1;
    return *this;
}

Overcoat Overcoat::operator++(int)
{
}

Overcoat& Overcoat::operator--()
{
}

Overcoat Overcoat::operator--(int)
{
}

std::ostream& operator<<(std::ostream& out, const Overcoat& c)
{
    // TODO: insert return statement here
}

std::istream& operator>>(std::ostream& in, const Overcoat& c)
{
    // TODO: insert return statement here
}
