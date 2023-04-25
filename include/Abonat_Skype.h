#pragma once
#include "Abonat.h"

class Abonat_Skype : Abonat {
  std::string id_skype;

public:
  Abonat_Skype();
  Abonat_Skype(const std::string id_skype);
  Abonat_Skype(const Abonat_Skype &other);
  ~Abonat_Skype();
};