#ifndef __PLANETINTERFACE_HH__

#define __PLANETINTERFACE_HH__

#include "citizen.hh"

class Citizen;

class PlanetInterface {

  public :
  
  PlanetInterface(void) {};
  typedef long long CitizenID;
  virtual ~PlanetInterface(void) = 0; 

  protected:

  static CitizenID currently_checked_id;
};

typedef PlanetInterface::CitizenID CitizenId;

#endif /* __PLANETINTERFACE_HH__ */
