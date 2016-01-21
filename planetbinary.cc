#include "planetbinary.hh"

template <typename CitizenType>
const CitizenType& PlanetBinary<CitizenType>::PlanetBinary(
    const CitizenType& citizen1,
    const CitizenType& citizen2) {
  auto helper_iterator = list_of_citizens.insert(
      std::pair<CitizenID, CitizenType>(
        PlanetInterface::currently_checked_id++,
        CitizenType(citizen1, citizen2)));
  return helper_iterator->second;
}
