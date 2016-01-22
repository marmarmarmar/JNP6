#include "citizen.hh"
#include "planetinterface.hh"

PlanetInterface::~PlanetInterface(void) {
}

CitizenID PlanetInterface::currently_checked_id = 0;
