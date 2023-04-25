#pragma once
#include "Abonat_Skype.h"

class Abonat_Skype_extern : Abonat_Skype {
  std::string tara;

public:
  Abonat_Skype_extern();
  Abonat_Skype_extern(const std::string id_skype);
  Abonat_Skype_extern(const Abonat_Skype_extern &other);
  ~Abonat_Skype_extern();
};