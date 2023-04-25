#include "include/Abonat_Skype_Extern.h"

Abonat_Skype_Extern::Abonat_Skype_Extern()
{
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string other_tara, const std::string other_id_skype, const std::string other_nr_telefon, const int other_id, const std::string other_nume)
    : Abonat_Skype(other_id_skype, other_nr_telefon, other_id, other_nume)
{
  tara = other_tara;
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string other_tara, const Abonat_Skype& other_abonat_skype)
    : Abonat_Skype(other_abonat_skype)
{
  tara = other_tara;
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const Abonat_Skype_Extern& other)
{
  tara = other.tara;
}

Abonat_Skype_Extern::~Abonat_Skype_Extern()
{
}

void Abonat_Skype_Extern::show()
{
  std::cout << "Persoana '" << nume << "' are ID-ul " << id << std::endl;
  std::cout << "Fiind Abonat Skype Extern, are: \nNr. Telefon: " << nr_telefon << "\nID Skype: " << id_skype << "\nTara: " << std::endl;
}

std::string Abonat_Skype_Extern::getName()
{
  return nume;
}

Abonat_Skype_Extern& Abonat_Skype_Extern::operator=(const Abonat_Skype_Extern& other)
{
  id = other.id;
  nume = other.nume;
  nr_telefon = other.nr_telefon;
  id_skype = other.id_skype;
  tara = other.tara;
  return *this;
}

std::istream& operator>>(std::istream& stream, Abonat_Skype_Extern& obj)
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

  std::cout << "Tara: ";
  stream >> obj.tara;

  return stream;
}

std::ostream& operator<<(std::ostream& stream, const Abonat_Skype_Extern& obj)
{
  stream << "Persoana '" << obj.nume << "' are ID-ul " << obj.id << std::endl;
  stream << "Fiind Abonat Skype Extern, are: \nNr. Telefon: " << obj.nr_telefon << "\nID Skype: " << obj.id_skype << "\nTara: " << std::endl;

  return stream;
}