#pragma once
#include "Abonat_Skype.h"

class Abonat_Skype_Romania : Abonat_Skype {
  std::string adresa_mail;

public:
  Abonat_Skype_Romania();
  Abonat_Skype_Romania(const std::string id_skype);
  Abonat_Skype_Romania(const Abonat_Skype_Romania &other);
  ~Abonat_Skype_Romania();
};