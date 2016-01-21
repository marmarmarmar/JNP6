#ifndef __PLANET_HH__

#define __PLANET_HH__

#include "planetinterface.hh"
#include <map>

template <typename CitizenType>
class Planet : public PlanetInterface {

  public :

  ~Planet(void);
  const CitizenType& registerCitizen(const std::string&);
  const CitizenType& registerCitizen(void);
  template <typename T>
  const CitizenType& findCitizen(const T&) const;

  private :
  std::map <CitizenId, CitizenType> list_of_citizens;
};

#endif /* __PLANET_HH__ */
