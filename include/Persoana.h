#pragma once
#include <iostream>

class Persoana
{
protected:
  int id;
  std::string nume;

public:
  Persoana();
  Persoana(int id, const std::string other_nume);
  Persoana(const Persoana& other);
  virtual ~Persoana();

  Persoana& operator=(const Persoana& other);

  friend std::istream& operator>>(std::istream& stream, Persoana& obj);
  friend std::ostream& operator<<(std::ostream& stream, const Persoana& obj);
};