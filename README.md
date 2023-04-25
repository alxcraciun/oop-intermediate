# OOP Intermediate Project

**Tema 04** <br>
Se dau urmatoarele clase:

- Clasa Persoana(int id, string nume)
- Clasa Abonat:Persoana(string nr_telefon)
- Clasa Abonat_Skype: Abonat (string id_skype)
- Clasa Abonat_Skype_Romania (string adresa_mail) : Abonat_Skype
- Clasa Abonat_Skype_Extern(string tara) : Abonat_Skype

Sa se construiasca clasa Agenda ce contina o lista de abonati si sa se supraincarce operatorul [ ] (indexare) care returneaza abonatul cu numele precizat.

<br>

## Cerinte

Separarea codului din clase în fișiere header (.h/.hpp etc.) și surse (.cpp etc.) 

- Clasele mici și legate între ele se pot afla în aceeași pereche de fișiere header-sursă
- FĂRĂ using namespace std în fișiere .h la nivel global
- moșteniri
- funcții virtuale (pure); funcțiile virtuale vor fi apelate prin pointeri la clasa de bază
- pointerii la clasa de bază vor fi atribute ale altei clase, nu doar niște pointeri/referințe în main
- apelarea constructorului din clasa de bază
- smart pointers
- dynamic_cast
- suprascris cc/op= pentru copieri/atribuiri corecte
- excepții:
   - ierarhie proprie (cu baza std::exception sau derivată din std::exception)
   - utilizare cu sens: de exemplu, throw în constructor, try/catch în main
- funcții și atribute statice
- STL
- fără variabile globale
- cât mai multe const, testat/apelat tot codul public de interes din main
- implementarea a două funcționalități noi specifice temei; pot fi folosite funcții virtuale în acest scop