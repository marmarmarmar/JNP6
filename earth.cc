#include "earth.hh"

class Earth public Planet {
};

// Definition of earth() to prevent static initialization order fiasco
Earth& earth(void) {
  static Earth *local = new Earth();
  return *local;
}

Earth Earth::registerCitizen(void) {
  return Citizen<Earth>();
}

Earth Earth::registerCitizen(const String& name) {
  return Citizen<Earth>(name);
}
