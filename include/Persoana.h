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

class Abonat : Persoana {
  std::string nr_telefon;

public:
  Abonat();
  Abonat(const std::string nr_telefon);
  Abonat(const Abonat &other);
  ~Abonat();
};

class Abonat_Skype : Abonat {
  std::string id_skype;

public:
  Abonat_Skype();
  Abonat_Skype(const std::string id_skype);
  Abonat_Skype(const Abonat_Skype &other);
  ~Abonat_Skype();
};

class Abonat_Skype_Romania : Abonat_Skype {
  std::string adresa_mail;

public:
  Abonat_Skype_Romania();
  Abonat_Skype_Romania(const std::string id_skype);
  Abonat_Skype_Romania(const Abonat_Skype_Romania &other);
  ~Abonat_Skype_Romania();
};

class Abonat_Skype_extern : Abonat_Skype {
  std::string tara;

public:
  Abonat_Skype_extern();
  Abonat_Skype_extern(const std::string id_skype);
  Abonat_Skype_extern(const Abonat_Skype_extern &other);
  ~Abonat_Skype_extern();
};