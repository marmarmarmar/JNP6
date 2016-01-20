#include "citizen.hh"
#include <vector>

class Planet {

  public :
  
  typedef long long CitizenID;

  virtual Planet(void);
  virtual ~Planet(void) = 0; 
  virtual Citizen<Planet>& registerCitizen(const CitizenID&);
  virtual Citizen<Planet>& findCitizen(const CitizenID&) const;

  private:

  static Citizen_ID currently_checked_id = 0;

  vector <Citizen<Planet> > vector_of_citizens;
  vector <CitizenID> vector_of_ids;
};

Planet::~Planet(void) {
}
