class Planet {
  // An id for universe_id
  static int universe_id = 0;

  public :
  virtual Planet(void);
  virtual ~Planet(void); 
  virtual Citizen<Planet> registerCitizen(void) = 0;
  virtual Citizen<Planet> findCitizen(void) = 0;
}
