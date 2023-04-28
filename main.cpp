#include "include/Abonat_Skype.h"
#include "include/Abonat_Skype_Extern.h"
#include "include/Abonat_Skype_Romania.h"
#include "include/Agenda.h"
#include "include/Persoana.h"

std::string open;
int input;

Agenda agenda;
int Agenda::nr_abonati = 0;

int main()
{
  std::cout << "Intra in aplicatie? Y/N\n";
  while (std::cin >> open)
  {
    if (open == "N")
    {
      std::cout << "Program finalizat!";
      return 0;
    }
    else if (open != "Y")
    {
      std::cout << "Optiune invalida. Apasati doar tasta 'Y' sau 'N'\n";
      continue;
    }

    std::cout << std::endl;
    std::cout << "1) Adauga un abonat \n";
    std::cout << "2) Adauga un abonat pe Skype \n";
    std::cout << "3) Adauga un abonat pe Skype din Romania \n";
    std::cout << "4) Adauga un abonat pe Skype din alta tara.\n";
    std::cout << "5) Cauta un abonat deja existent \n";
    std::cout << "6) Afiseaza lista cu toti abonatii \n\n";

    std::cin >> input;
    std::cout << std::endl;

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
      break;
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
      break;
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
      break;
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
      break;
    }
    case 5:
    {
      try
      {
        std::cout << "Introduce numele: ";
        std::string nume;
        std::cin >> nume;
        agenda[nume];
      }
      catch (std::exception& err)
      {
        std::cout << "EROARE! " << err.what();
      }
      break;
    }
    case 6:
    {
      if (agenda.getLungime() == 0)
        std::cout << "Nu exista angajati in agenda.\n";
      else
        agenda.show();
      break;
    }
    default:
    {
      std::cout << "Optiunea introdusa este gresita.\n";
    }
    }

    std::cout << "Doriti sa continuati? Y/N\n";
  }

  return 0;
}