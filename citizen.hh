#include "planetinterface.hh"
#include "citizenname.hh"

class Citizen {

  CitizenID my_id;
  CitizenName name;

  public:
  virtual ~Citizen(void) = 0;
  Citizen(const Citizen_ID&);
  Citizen(const Citizen_ID&, const string&);
  const CitizenName& getName(void);
  const CitizenID& getID(void);
};
