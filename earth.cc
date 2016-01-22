#include "citizen.hh"
#include "planet.hh"
#include "human.hh"

Planet<Human>& earth(void) {
  Planet<Human> *static_instance = new Planet<Human>();
  return *static_instance;
}
