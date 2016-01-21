#include "citizen.hh"

Citizen::Citizen(const CitizenID& citizen_id) :
  my_id(citizen_id),
  name(CitizenNameEmpty()) { };

Citizen::Citizen(
    const CitizenID& citizen_id,
    const std::string citizen_name) :
  my_id(citizen_id),
  name(CitizenNameNormal(citizen_name)) { };

const CitizenName& getName(void) {
  return citizen_name;
}

const CitizenName& getID(void) {
  return citizen_id;
}
