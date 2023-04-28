#pragma once
#include "Abonat.h"
#include "Abonat_Skype.h"
#include "Abonat_Skype_Extern.h"
#include "Abonat_Skype_Romania.h"
#include "Persoana.h"
#include <vector>
#include <memory>

class Agenda
{
private:
  static int nr_abonati;
  std::vector<Abonat*> lista_abonati;
  // std::vector <std::unique_ptr<Abonat>> lista_abonati;

public:
  Agenda();
  ~Agenda();

  void show();
  static int getLungime();

  Agenda& operator+=(const Abonat& other_abonat);
  Agenda& operator+=(const Abonat_Skype& other_abonat);
  Agenda& operator+=(const Abonat_Skype_Extern& other_abonat);
  Agenda& operator+=(const Abonat_Skype_Romania& other_abonat);
  Agenda& operator[](const std::string& other_nume);

  friend std::ostream& operator<<(std::ostream& stream, const Agenda& obj);
};