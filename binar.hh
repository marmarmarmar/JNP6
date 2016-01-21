#include "citizen.hh"

class Binar : public Citizen {
  public:
  virtual ~Binar(void);
  Binar(
      const CitizenID&,
      const Binar&, 
      const Binar&);
};

template <>
class Planet<Binar> {
  public:
  virtual const Binar& registerCitizen(const std::string&);
  virtual const Binar& registerCitizen(const Binar&, const Binar&);
  virtual const Binar& findCitizen(const CitizenID&) const;
};
