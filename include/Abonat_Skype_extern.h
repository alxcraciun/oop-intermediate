#pragma once
#include "Abonat_Skype.h"

class Abonat_Skype_Extern : Abonat_Skype
{
  std::string tara;

public:
  Abonat_Skype_Extern();
  Abonat_Skype_Extern(const std::string tara, const std::string id_skype, const std::string nr_telefon, const int id, const std::string nume);
  Abonat_Skype_Extern(const Abonat_Skype_Extern &other);
  virtual ~Abonat_Skype_Extern();

  void show() override;
  std::string getName() override;

  Abonat_Skype_Extern &operator=(const Abonat_Skype_Extern &other);
  friend std::istream &operator>>(std::istream &in, Abonat_Skype_Extern &obj);
  friend std::ostream &operator<<(std::ostream &out, const Abonat_Skype_Extern &obj);
};