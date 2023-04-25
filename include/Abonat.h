#pragma once
#include "Persoana.h"

class Abonat : Persoana {
  std::string nr_telefon;

public:
  Abonat();
  Abonat(const std::string nr_telefon);
  Abonat(const Abonat &other);
  ~Abonat();
};