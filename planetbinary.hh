#include "planet.hh"

template <typename CitizenType>
class PlanetBinary : public Planet<CitizenType> {

  public:
  virtual const CitizenType& registerCitizen(
      const CitizenType&, const CitizenType&);
};
