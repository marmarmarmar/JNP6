#include "planetinterface.hh"

template <typename CitizenType>
class Planet : public PlanetInterface {

  private :
  Planet();
  map <CitizenPlanetaryId, CitizenType> list_of_citizens;
};
