#include "include/Abonat_Skype.h"
#include "include/Abonat_Skype_Extern.h"
#include "include/Abonat_Skype_Romania.h"
#include "include/Agenda.h"
#include "include/Persoana.h"
#include <iostream>

int main()
{
  std::string open;
  int input;
  Agenda agenda;

  std::cout << "Intra in aplicatie? Y/N\n";

  std::cin >> open;
  while (open != "Y")
  {
    if (open == "N")
    {
      std::cout << "Program finalizata!";
      return 0;
    }
    else
    {
      std::cout << "Optiune invalida. Apasati doar tasta 'Y' sau 'N'\n";
      std::cin >> open;
      continue;
    }

    system("cls");
    std::cout << "1) Adauga un abonat \n";
    std::cout << "2) Adauga un abonat pe Skype \n";
    std::cout << "3) Adauga un abonat pe Skype din Romania \n";
    std::cout << "4) Adauga un abonat pe Skype din alta tara.\n";
    std::cout << "5) Cauta un abonat deja existent \n";
    std::cout << "6) Afiseaza lista cu toti abonatii \n";
    std::cin >> input;

    switch (input)
    {
    case 1:
    {
      try
      {
        Abonat abonat;
        std::cin >> abonat;
        agenda += abonat;
      }
      catch (std::exception& err)
      {
        std::cout << "EROARE! " << err.what() << "Nu s-a reusit introducera abonatului in agenda.\n";
      }
    }
    case 2:
    {
      try
      {
        Abonat_Skype abonat;
        std::cin >> abonat;
        agenda += abonat;
      }
      catch (std::exception& err)
      {
        std::cout << "EROARE! " << err.what() << "Nu s-a reusit introducera abonatului in agenda.\n";
      }
    }
    case 3:
    {
      try
      {
        Abonat_Skype_Romania abonat;
        std::cin >> abonat;
        agenda += abonat;
      }
      catch (std::exception& err)
      {
        std::cout << "EROARE! " << err.what() << "Nu s-a reusit introducera abonatului in agenda.\n";
      }
    }
    case 4:
    {
      try
      {
        Abonat_Skype_Extern abonat;
        std::cin >> abonat;
        agenda += abonat;
      }
      catch (std::exception& err)
      {
        std::cout << "EROARE! " << err.what() << "Nu s-a reusit introducera abonatului in agenda.\n";
      }
    }
    case 5:
    {
      try
      {
        std::cout << "Introduce numele: ";
        std::string nume;
        std::cin >> nume;
        for (int i = 0; i < nume.size(); i++)
          if (!(nume[i] >= 'a' && nume[i] <= 'z') || (nume[i] >= 'A' && nume[i] <= 'Z'))
            throw std::invalid_argument("Numele introdus este invalid\n");
        agenda[nume];
      }
      catch (std::exception& err)
      {
        std::cout << "EROARE! " << err.what();
      }
    }
    case 6:
    {
      if (agenda.getLungime() == 0)
        std::cout << "Nu exista angajati in agenda.\n";
      else
        agenda.show();
    }
    default:
    {
      std::cout << "Optiunea introdusa este gresita.\n\n";
    }
    }
    std::cout << "Doriti sa continuati? Y/N\n";
    std::cin >> open;
  }

  return 0;
}