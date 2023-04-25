#include "include/Persoana.h"

Persoana::Persoana() {}

Persoana::Persoana(int other_id, const std::string other_nume)
{
  id = other_id;
  nume = other_nume;
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

  std::cout << "Nume: ";
  stream >> obj.nume;

  return stream;
}

std::ostream& operator<<(std::ostream& stream, const Persoana& obj)
{
  stream << "Persoana '"<< obj.nume << "' are ID-ul " << obj.id << std::endl;
  return stream;
}

Persoana::~Persoana() {}