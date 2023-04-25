#include "Persoana.h"

Persoana::Persoana() {}

Persoana::Persoana(int id, const std::string nume)
{
  this->id = id;
  this->nume = nume;
}

Persoana::Persoana(const Persoana& other)
{
  id = other.id;
  nume = other.nume;
}

Persoana& Persoana::operator=(const Persoana& other)
{
  id = other.id;
  nume = other.nume;
  return *this;
}

std::istream& operator>>(std::istream& stream, Persoana& obj)
{
  std::cout << "ID: ";
  stream >> obj.id;
  std::cout << std::endl;

  std::cout << "Nume: ";
  stream >> obj.nume;
  std::cout << std::endl;

  return stream;
}

std::ostream& operator<<(std::ostream& stream, const Persoana& obj)
{
  stream << obj.nume << "are ID-ul " << obj.id << std::endl;
  return stream;
}

Persoana::~Persoana() {}