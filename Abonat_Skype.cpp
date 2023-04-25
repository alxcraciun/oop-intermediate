#include "include/Abonat_Skype.h"

Abonat_Skype::Abonat_Skype()
{
}

Abonat_Skype::Abonat_Skype(const std::string other_id_skype, const std::string other_nr_telefon, const int other_id, const std::string other_nume)
  : Abonat(other_nr_telefon, other_id, other_nume)
{
  id_skype = other_id_skype;
}

Abonat_Skype::Abonat_Skype(const std::string other_id_skype, const Abonat& other_abonat)
  : Abonat(other_abonat)
{
  id_skype = other_id_skype;
}

Abonat_Skype::Abonat_Skype(const Abonat_Skype& other)
  : Abonat(other)
{
  id_skype = other.id_skype;
}

Abonat_Skype::~Abonat_Skype()
{
}

std::string Abonat_Skype::getName()
{
  return nume;
}

void Abonat_Skype::show()
{
  std::cout << "Persoana '"<< nume << "' are ID-ul " << id << std::endl;
  std::cout << "Fiind Abonat Skype, are: \nNr. Telefon: " << nr_telefon << "\nID Skype: " << id_skype << std::endl;
}

Abonat_Skype& Abonat_Skype::operator=(const Abonat_Skype& other)
{
  id = other.id;
  nume = other.nume;
  nr_telefon = other.nr_telefon;
  id_skype = other.id_skype;
  return *this;
}

std::istream& operator>>(std::istream& stream, Abonat_Skype& obj)
{
  std::cout << "Nr. Telefon: ";
  stream >> obj.nr_telefon;

  if (obj.nr_telefon[0] != '0' || obj.nr_telefon.size() < 10 || obj.nr_telefon.size() > 10)
  {
    throw std::invalid_argument("Eroare: Numarul de telefon este invalid\n");
    return stream;
  }

  std::cout << "ID: ";
  stream >> obj.id;

  std::cout << "Nume: ";
  stream >> obj.nume;

  for (int i = 0; i < obj.nume.size(); i++)
  {
    if (obj.nume[i] >= '0' && obj.nume[i] <= '9')
      throw std::invalid_argument("Numele introdus este invalid, introduceti doar caractere ale alfabetului englez\n");

    else if (!((obj.nume[i] >= 'a' && obj.nume[i] <= 'z') || (obj.nume[i] >= 'A' && obj.nume[i] <= 'Z') || (obj.nume[i] == ' ')))
      throw std::invalid_argument("Numele introdus este invalid, introduceti doar caractere ale alfabetului englez\n");
  }
  
  std::cout << "ID Skype: ";
  stream >> obj.id_skype;

  return stream;
}

std::ostream& operator<<(std::ostream& stream, const Abonat_Skype& obj)
{
  stream << "Persoana '"<< obj.nume << "' are ID-ul " << obj.id << std::endl;
  stream << "Fiind Abonat Skype, are: \nNr. Telefon: " << obj.nr_telefon << "\nID Skype: " << obj.id_skype << std::endl;

  return stream;
}