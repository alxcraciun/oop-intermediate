#pragma once
#include <iostream>

class Abonament {
  std::string nume_abonament;
  float pret;
  int perioada;

public:
  Abonament();
  Abonament(const std::string nume_abonament, const float pret,
            const int perioada);
  Abonament(const Abonament &other);
  ~Abonament();
};

class Abonament_Premium : Abonament {
  int reducere;

public:
  Abonament_Premium();
  Abonament_Premium(const int reducere);
  Abonament_Premium(const Abonament_Premium &other);
  ~Abonament_Premium();
};

class Persoana {
  int id;
  std::string nume, cnp;

public:
  Persoana();
  Persoana(int id, const std::string nume, std::string cnp);
  Persoana(const Persoana &other);
  ~Persoana();
};

class Abonat : Persoana {
	std::string nr_telefon;
	Abonament x;
};