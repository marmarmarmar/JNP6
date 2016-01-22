#include "binar.hh"

Binar::Binar(const CitizenID& new_citizen_id,
    const Binar& binar1,
    const Binar& binar2) :
  Citizen(new_citizen_id) {
    my_name = CitizenName(binar1.name(), binar2.name());
  }
