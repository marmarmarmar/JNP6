#include "citizen.hh"

Citizen::~Citizen(void) {};

Citizen::Citizen(const CitizenID& citizen_id) :
  my_id(citizen_id) { };

Citizen::Citizen(
    const CitizenID& citizen_id,
    const std::string& citizen_name) :
  my_id(citizen_id),
  my_name(CitizenName(citizen_name)) { };

const CitizenName& Citizen::name(void) const {
  return my_name;
}

const CitizenID& Citizen::id(void) const {
  return my_id;
}
