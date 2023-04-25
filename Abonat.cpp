#include "include/Abonat.h"

Abonat::Abonat()
{
    
}

Abonat::Abonat(const std::string nr_telefon, const int id, const std::string nume)
    : Persoana(id, nume)
{
    this->nr_telefon = nr_telefon 
}

Abonat::Abonat(const std::string nr_telefon, const Persoana& persoana) 
    : Persoana(persoana)
{
    
}

Abonat::Abonat(const Abonat& other)
{
    
}

Abonat::~Abonat()
{
    
}

void Abonat::show()
{
    
}

std::string Abonat::getName()
{
    
}

Abonat& Abonat::operator=(const Abonat& other)
{
    
}

std::istream& operator>>(std::istream& stream, Abonat& obj)
{
    
}

std::ostream& operator<<(std::ostream& stream, const Abonat& obj)
{
    
}
