#pragma once
#include "Abonat_Skype.h"

class Abonat_Skype_Extern : public Abonat_Skype
{
  std::string tara;

public:
  Abonat_Skype_Extern();
  Abonat_Skype_Extern(const std::string other_tara, const std::string other_id_skype, const std::string other_nr_telefon, const int other_id, const std::string other_nume);
  Abonat_Skype_Extern(const std::string other_tara, const Abonat_Skype& other_abonat_skype);
  Abonat_Skype_Extern(const Abonat_Skype_Extern& other);
  virtual ~Abonat_Skype_Extern();

  void show() override;
  std::string getName() override;

  Abonat_Skype_Extern& operator=(const Abonat_Skype_Extern& other);
  friend std::istream& operator>>(std::istream& stream, Abonat_Skype_Extern& obj);
  friend std::ostream& operator<<(std::ostream& stream, const Abonat_Skype_Extern& obj);
};