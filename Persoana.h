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

  friend std::istream &operator>>(std::istream &stream, Persoana &persoana);
  friend std::ostream &operator<<(std::ostream &stream, const Persoana &persoana);
};