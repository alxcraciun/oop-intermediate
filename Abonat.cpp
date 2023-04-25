#include "include/Abonat.h"

Abonat::Abonat()
{
}

Abonat::Abonat(const std::string other_nr_telefon, const int id, const std::string nume)
    : Persoana(id, nume)
{
  nr_telefon = other_nr_telefon;
}

Abonat::Abonat(const std::string other_nr_telefon, const Persoana& other_persoana)
    : Persoana(other_persoana)
{
  nr_telefon = other_nr_telefon;
}

Abonat::Abonat(const Abonat& other)
    : Persoana(other)
{
  nr_telefon = other.nr_telefon;
}

Abonat::~Abonat()
{
}

void Abonat::show()
{
  std::cout << "Persoana '" << nume << "' are ID-ul " << id << std::endl;
  std::cout << "Fiind Abonat Skype, are nr. telefon " << this->nr_telefon << '\n';
}

std::string Abonat::getName()
{
  return this->nume;
}

Abonat& Abonat::operator=(const Abonat& other)
{
  id = other.id;
  nume = other.nume;
  nr_telefon = other.nr_telefon;
  return *this;
}

std::istream& operator>>(std::istream& stream, Abonat& obj)
{
  std::cout << "Nr. Telefon: ";
  stream >> obj.nr_telefon;

  if (obj.nr_telefon[0] != '0' || obj.nr_telefon.size() < 10 || obj.nr_telefon.size() > 10)
    throw std::invalid_argument("Eroare: Numarul de telefon este invalid\n");

  std::cout << "ID: ";
  stream >> obj.id;
  std::cout << std::endl;

  std::cout << "Nume: ";
  stream >> obj.nume;
  std::cout << std::endl;

  for (int i = 0; i < obj.nume.size(); i++)
  {
    if (obj.nume[i] >= '0' || obj.nume[i] <= '9')
      throw std::invalid_argument("Numele introdus este invalid, introduceti doar caractere ale alfabetului englez\n");

    else if (!((obj.nume[i] <= 'a' && obj.nume[i] >= 'z') || (obj.nume[i] >= 'A' && obj.nume[i] <= 'Z') || (obj.nume[i] == ' ')))
      throw std::invalid_argument("Numele introdus este invalid, introduceti doar caractere ale alfabetului englez\n");
  }
  
  return stream;
}

std::ostream& operator<<(std::ostream& stream, const Abonat& obj)
{
  stream << "Persoana '"<< obj.nume << "' are ID-ul " << obj.id << std::endl;
  stream << "Fiind Abonat Skype, are nr. telefon " << obj.nr_telefon << std::endl;

  return stream;
}
