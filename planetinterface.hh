class PlanetInterface {

  public :
  
  typedef long long CitizenID;

  virtual ~Planet(void) = 0; 
  virtual const Citizen& registerCitizen(const std::string&) = 0;
  virtual const Citizen& findCitizen(const CitizenID&) const = 0;

  protected:

  static Citizen_ID currently_checked_id = 0;
};

Planet::~Planet(void) {
}
