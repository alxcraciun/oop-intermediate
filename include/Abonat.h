#pragma once
#include "Persoana.h"

class Abonat : public Persoana
{
protected:
  std::string nr_telefon;

public:
  Abonat();
  Abonat(const std::string other_nr_telefon, const int other_id, const std::string other_nume);
  Abonat(const std::string other_nr_telefon, const Persoana& other_persoana);
  Abonat(const Abonat& other);
  virtual ~Abonat();

  virtual void show() override;
  virtual std::string getName();

  Abonat& operator=(const Abonat& other);
  friend std::istream& operator>>(std::istream& stream, Abonat& obj);
  friend std::ostream& operator<<(std::ostream& stream, const Abonat& obj);
};