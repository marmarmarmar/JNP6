#include "planet.hh"
#include "qonos.hh"

Planet<Cronos>& qonos(void) {
  Planet<Cronos> *static_instance = new Planet<Cronos>();
  return *static_instance;
}
