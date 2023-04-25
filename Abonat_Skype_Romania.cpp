#include "include/Abonat_Skype_Romania.h"

Abonat_Skype_Romania::Abonat_Skype_Romania()
{
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string other_adresa_mail, const std::string other_id_skype, const std::string other_nr_telefon, const int other_id, const std::string other_nume)
    : Abonat_Skype(other_id_skype, other_nr_telefon, other_id, other_nume)
{
  adresa_mail = other_adresa_mail;
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string other_adresa_mail, const Abonat_Skype& other_abonat_skype)
    : Abonat_Skype(other_abonat_skype)
{
  adresa_mail = other_adresa_mail;
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const Abonat_Skype_Romania& other)
{
  adresa_mail = other.adresa_mail;
}

Abonat_Skype_Romania::~Abonat_Skype_Romania()
{
}

void Abonat_Skype_Romania::show()
{
  std::cout << "Persoana '" << nume << "' are ID-ul " << id << std::endl;
  std::cout << "Fiind Abonat Skype Romania, are: \nNr. Telefon: " << nr_telefon << "\nID Skype: " << id_skype << "\nAdresa de mail: " << std::endl;
}

std::string Abonat_Skype_Romania::getName()
{
  return nume;
}

Abonat_Skype_Romania& Abonat_Skype_Romania::operator=(const Abonat_Skype_Romania& other)
{
  id = other.id;
  nume = other.nume;
  nr_telefon = other.nr_telefon;
  id_skype = other.id_skype;
  adresa_mail = other.adresa_mail;
  return *this;
}

std::istream& operator>>(std::istream& stream, Abonat_Skype_Romania& obj)
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

  std::cout << "Adresa Mail: ";
  stream >> obj.adresa_mail;

  int counter = 0;
  for (int i = 0; i < obj.adresa_mail.size(); i++)
    if (obj.nume[i] == '@')
      counter++;
  
  if(counter != 1) 
  {
    throw std::invalid_argument("Adresa de mail este invalida\n");
    return stream;
  }

  return stream;
}

std::ostream& operator<<(std::ostream& stream, const Abonat_Skype_Romania& obj)
{
  stream << "Persoana '" << obj.nume << "' are ID-ul " << obj.id << std::endl;
  stream << "Fiind Abonat Skype Romania, are: \nNr. Telefon: " << obj.nr_telefon << "\nID Skype: " << obj.id_skype << "\nAdresa de mail: " << std::endl;

  return stream;
}