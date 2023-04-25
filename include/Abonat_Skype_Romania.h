#pragma once
#include "Abonat_Skype.h"

class Abonat_Skype_Romania : public Abonat_Skype
{
protected:
  std::string adresa_mail;

public:
  Abonat_Skype_Romania();
  Abonat_Skype_Romania(const std::string other_adresa_mail, const std::string other_id_skype, const std::string other_nr_telefon, const int other_id, const std::string other_nume);
  Abonat_Skype_Romania(const std::string other_adresa_mail, const Abonat_Skype& other_abonat_skype);
  Abonat_Skype_Romania(const Abonat_Skype_Romania& other);
  virtual ~Abonat_Skype_Romania();

  void show() override;
  std::string getName() override;

  Abonat_Skype_Romania& operator=(const Abonat_Skype_Romania& other);
  friend std::istream& operator>>(std::istream& stream, Abonat_Skype_Romania& obj);
  friend std::ostream& operator<<(std::ostream& stream, const Abonat_Skype_Romania& obj);
};