#include "citizen.hh"
#include "planet.hh"

template <typename CitizenType>
const CitizenType& Planet<CitizenType>::registerCitizen (
    const std::string& name) {
  auto helper_iterator = list_of_citizens.insert(
      std::pair<CitizenID, CitizenType>(
        PlanetInterface::currently_checked_id++,
        CitizenType(name)));
  return helper_iterator->second;
}

template <typename CitizenType>
const CitizenType& Planet<CitizenType>::findCitizen (
    const CitizenID& id_we_look_for) const {
  auto helper_iterator = list_of_citizens.find(id_we_look_for);
  if (helper_iterator != list_of_citizens.end())
    return helper_iterator->second;
  else {
    NoCitizenError except;
    throw except;
  }
}


template <typename CitizenType>
template <typename T>
const CitizenType& Planet<CitizenType>::findCitizen (
    const T& id_we_look_for) const {
  NoCitizenError except;
  throw except;
}
