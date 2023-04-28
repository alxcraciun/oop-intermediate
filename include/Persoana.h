#pragma once
#include <iostream>
#include <string>

class Persoana
{
protected:
  int id;
  std::string nume;

public:
  Persoana();
  Persoana(int other_id, const std::string other_nume);
  Persoana(const Persoana& other);
  virtual ~Persoana();

  virtual void show() = 0;

  Persoana& operator=(const Persoana& other);
  friend std::istream& operator>>(std::istream& stream, Persoana& obj);
  friend std::ostream& operator<<(std::ostream& stream, const Persoana& obj);
};