#include "citizen.hh"
#include "planet.hh"

class Binar : public Citizen {
  public:
  Binar(void) {};
  ~Binar(void) {};
  Binar(
      const CitizenID&,
      const Binar&, 
      const Binar&);
};

template <>
class Planet<Binar> {
  public:
  Planet<Binar>(void) {};
  ~Planet<Binar>(void) {};
  virtual const Binar& registerCitizen(const std::string&);
  virtual const Binar& registerCitizen(const Binar&, const Binar&);
  virtual const Binar& findCitizen(const CitizenID&) const;
};
