#ifndef __CITIZEN_HH__

#define __CITIZEN_HH__

#include "planetinterface.hh"
#include "citizenname.hh"

typedef PlanetInterface::CitizenID CitizenID;

class Citizen {

  PlanetInterface::CitizenID my_id;
  CitizenName my_name;

  public:
  virtual ~Citizen(void) = 0;
  Citizen(const CitizenID&);
  Citizen(const CitizenID&, const std::string&);
  const CitizenName& name(void) const;
  const CitizenID& id(void) const;
};

#endif /* __CITIZEN_HH__ */
