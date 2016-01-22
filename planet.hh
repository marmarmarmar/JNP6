#ifndef __PLANET_HH__

#define __PLANET_HH__

#include "planetinterface.hh"
#include <map>

template <typename CitizenType>
class Planet : public PlanetInterface {

  public :

  ~Planet(void) {};
  Planet(void) {};
  const CitizenType& registerCitizen(const std::string&);
  const CitizenType& registerCitizen(void);
  template <typename T>
  const CitizenType& findCitizen(const T&) const;
  const CitizenType& findCitizen(const CitizenID&) const;

  private :
  std::map <CitizenId, CitizenType> list_of_citizens;
};

class NoCitizenError : public std::exception {
};

#endif /* __PLANET_HH__ */
