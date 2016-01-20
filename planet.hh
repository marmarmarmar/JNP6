class Planet {
  public :
  virtual Planet(void);
  virtual ~Planet(void); 
  virtual Citizen<Planet> registerCitizen(void) = 0;
  virtual Citizen<Planet> registerCitizen(const String&) = 0;
  virtual Citizen<Planet> findCitizen(void) = 1;
}
