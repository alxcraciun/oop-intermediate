#pragma once
#include <iostream>

class Persoana {
  int id;
  std::string nume;

public:
  Persoana();
  Persoana(int id, const std::string nume);
  Persoana(const Persoana &other);
  virtual ~Persoana();

  Persoana &operator=(const Persoana &other);

  friend std::istream &operator>>(std::istream &in, Persoana &persoana);
  friend std::ostream &operator<<(std::ostream &out, const Persoana &persoana);
};