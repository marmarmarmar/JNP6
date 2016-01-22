#include "citizenname.hh"
#include <string>
#include <sstream>

CitizenName::CitizenName(const std::string& string_name) :
  my_name(string_name) {};

CitizenName::CitizenName(
    const CitizenName& name1,
    const CitizenName& name2) {
  std::stringstream temp_ss;
  temp_ss << name1 << "&" << name2;
  my_name = temp_ss.str();
}

std::ostream& operator<<(std::ostream& os, const CitizenName& name) {
  os << name.my_name;
  return os;
}
