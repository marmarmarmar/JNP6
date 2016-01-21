#include "planet.hh"

template <typename CitizenType>
class PlanetBinary : public Planet<CitizenType> {

  public:
  virtual const Citizen& registerCitizen(
      const Citizen&, const Citizen&);
};

const PlanetBinary& bynaus(void);
