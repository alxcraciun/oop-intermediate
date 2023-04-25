#pragma once
#include "Abonat.h"

class Abonat_Skype : public Abonat
{
protected:
  std::string id_skype;

public:
  Abonat_Skype();
  Abonat_Skype(const std::string id_skype, const std::string nr_telefon, const int id, const std::string nume);
  Abonat_Skype(const std::string id_skype, const Abonat& abonat);
  Abonat_Skype(const Abonat_Skype& other);
  virtual ~Abonat_Skype();

  std::string getName() override;
  void show() override;

  Abonat_Skype& operator=(const Abonat_Skype& other);
  friend std::istream& operator>>(std::istream& stream, Abonat_Skype& obj);
  friend std::ostream& operator<<(std::ostream& stream, const Abonat_Skype& obj);
};