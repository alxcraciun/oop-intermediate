#pragma once
#include "Abonat_Skype.h"

class Abonat_Skype_Romania : Abonat_Skype
{
protected:
  std::string adresa_mail;

public:
  Abonat_Skype_Romania();
  Abonat_Skype_Romania(const std::string adresa_mail, const std::string id_skype, const std::string nr_telefon, const int id, const std::string nume);
  Abonat_Skype_Romania(const std::string adresa_mail, const Abonat_Skype &abonat_skype);
  Abonat_Skype_Romania(const Abonat_Skype_Romania &other);
  virtual ~Abonat_Skype_Romania();

  void show() override;
  std::string getName() override;

  Abonat_Skype_Romania &operator=(const Abonat_Skype_Romania &other);
  friend std::istream &operator>>(std::istream &in, Abonat_Skype_Romania &obj);
  friend std::ostream &operator<<(std::ostream &out, const Abonat_Skype_Romania &obj);
};