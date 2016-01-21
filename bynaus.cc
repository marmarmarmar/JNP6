#include "planet.hh"
#include "binar.hh"

Planet<Binar>& bynaus(void) {
  Planet<Binar> *static_instance = new Planet<Binar>();
  return *static_instance;
}
