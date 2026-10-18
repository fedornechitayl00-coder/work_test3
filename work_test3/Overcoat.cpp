#include "Overcoat.h"

Overcoat::Overcoat()
{
    name = "noname";
    type = "undefined";
    overcoatSize = 0;
    price = 0.0f;
}

Overcoat::Overcoat(std::string name, std::string type, int overcoatSize, float price)
{
    this->name = name;
    this->type = type;
    this->overcoatSize = overcoatSize;
    this->price = price;
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

int Overcoat::getOvercoatSize() const
{
    return overcoatSize;
}

void Overcoat::setOvercoatSize(int size)
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

void Overcoat::showSize() const
{
    switch (getOvercoatSize()) {
    case 1:
        std::cout << "XXS";
        break;
    case 2:
        std::cout << "XS";
        break;
    case 3:
        std::cout << "S";
        break;
    case 4:
        std::cout << "M";
        break;
    case 5:
        std::cout << "L";
        break;
    case 6:
        std::cout << "XL";
        break;
    case 7:
        std::cout << "XXL";
        break;
    default:
        std::cout << "unknown size";
    }
}

void Overcoat::showInfo() const
{
    std::cout << "\nname:" << getName() <<
        "\ntype:" << getType() <<
        "\nsize:"; showSize();
        std::cout << "\nprice:" << getPrice() <<
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

Overcoat& Overcoat::operator-=(int value)
{
    this->price -= value;
    return *this;
}

Overcoat& Overcoat::operator+=(int value)
{
    this->price += value;
    return *this;
}

Overcoat& Overcoat::operator++()
{
    (*this) += 1;
    return *this;
}

Overcoat Overcoat::operator++(int)
{
    Overcoat tmp = (*this);
    ++(*this);
    return tmp;
}

Overcoat& Overcoat::operator--()
{
    (*this) -= 1;
    return *this;
}

Overcoat Overcoat::operator--(int)
{
    Overcoat tmp = (*this);
    --(*this);
    return tmp;
}

std::ostream& operator<<(std::ostream& out, const Overcoat& obj)
{
    out << "\nname:" << obj.getName() <<
        "\ntype:" << obj.getType() <<
        "\nsize:" << obj.getOvercoatSize() <<
        "\nprice:" << obj.getPrice() <<
        "\nnumber:" << obj.number;
    return out;
}

std::istream& operator>>(std::istream& in, Overcoat& obj)
{
    in >> obj.name >> obj.type >> obj.overcoatSize >> obj.price;
    return in;
}
