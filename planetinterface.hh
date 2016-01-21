#ifndef __PLANETINTERFACE_HH__

#define __PLANETINTERFACE_HH__

#include "citizen.hh"

class Citizen;

class PlanetInterface {

  public :
  
  typedef long long CitizenID;

  PlanetInterface(void);
  virtual ~PlanetInterface(void) = 0; 

  protected:

  static CitizenID currently_checked_id;
};

typedef PlanetInterface::CitizenID CitizenId;

#endif /* __PLANETINTERFACE_HH__ */
