#pragma once
#include "Persoana.h"

class Abonat : public Persoana
{
protected:
  std::string nr_telefon;

public:
  Abonat();
  Abonat(const std::string nr_telefon, const int id, const std::string nume);
  Abonat(const std::string nr_telefon, const Persoana& persoana);
  Abonat(const Abonat& other);
  virtual ~Abonat();

  virtual void show();
  virtual std::string getName();

  Abonat& operator=(const Abonat& other);
  friend std::istream& operator>>(std::istream& in, Abonat& obj);
  friend std::ostream& operator<<(std::ostream& out, const Abonat& obj);
};