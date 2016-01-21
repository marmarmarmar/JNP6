#include "binar.hh"

Binar::Binar(CitizenID& new_citizen_id,
    const Binar& binar1,
    const Binar& binar2) :
  citizen_id(my_id),
  name(CitizenNameBinar(binar1.getName(), binar2.getName()) {};

Binar::~Binar(void) {};
