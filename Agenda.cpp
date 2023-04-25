#pragma once
#include "include/Agenda.h"
#include <stdexcept>

Agenda::Agenda()
{
  nr_abonati = 0;
}

Agenda::~Agenda()
{
}

void Agenda::show()
{
  int counter = 1;
  for (auto i : lista_abonati)
  {
    std::cout << counter << ")\n";
    if (typeid(*i) == typeid(Abonat_Skype))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype*>(i);
      aux->show();
    }
    else if (typeid(*i) == typeid(Abonat_Skype_Romania))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype_Romania*>(i);
      aux->show();
    }
    else if (typeid(*i) == typeid(Abonat_Skype_Extern))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype_Extern*>(i);
      aux->show();
    }
    else
      std::cout << *i;
  }
}

int Agenda::getLungime()
{
  return nr_abonati;
}

Agenda& Agenda::operator+=(const Abonat& other_abonat)
{
  nr_abonati++;
  lista_abonati.push_back(new Abonat());
  return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype& other_abonat)
{
  nr_abonati++;
  lista_abonati.push_back(new Abonat_Skype());
  return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype_Extern& other_abonat)
{
  nr_abonati++;
  lista_abonati.push_back(new Abonat_Skype_Extern());
  return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype_Romania& other_abonat)
{
  nr_abonati++;
  lista_abonati.push_back(new Abonat_Skype_Romania());
  return *this;
}

Agenda& Agenda::operator[](const std::string& other_nume)
{
  bool found = false;

  for (auto x : lista_abonati)
  {
    if (typeid(*x) == typeid(Abonat_Skype_Extern))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype_Extern*>(x);
      if (aux->getName() == other_nume)
      {
        found = true;
        aux->show();
        break;
      }
    }
    else if (typeid(*x) == typeid(Abonat_Skype_Romania))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype_Romania*>(x);
      if (aux->getName() == other_nume)
      {
        found = 1;
        aux->show();
        break;
      }
    }
    else if (typeid(*x) == typeid(Abonat_Skype))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype*>(x);
      if (aux->getName() == other_nume)
      {
        found = true;
        aux->show();
        break;
      }
    }
    else
    {
      if (x->getName() == other_nume)
      {
        found = true;
        x->show();
        break;
      }
    }
  }

  if (found == false)
    throw std::invalid_argument("Abonatul cu numele accesat nu exista in agenda");

  return *this;
}

std::ostream& operator<<(std::ostream& stream, const Agenda& obj)
{
  int counter = 1;
  for (auto i : obj.lista_abonati)
  {
    stream << counter << ")\n";
    if (typeid(*i) == typeid(Abonat_Skype))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype*>(i);
      aux->show();
    }
    else if (typeid(*i) == typeid(Abonat_Skype_Romania))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype_Romania*>(i);
      aux->show();
    }
    else if (typeid(*i) == typeid(Abonat_Skype_Extern))
    {
      Abonat* aux = dynamic_cast<Abonat_Skype_Extern*>(i);
      aux->show();
    }
    else
      stream << *i;
  }

  return stream;
}
