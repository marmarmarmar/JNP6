#include "citizenname.hh"

CitizenNameNormal::CitizenNameNormal(const std::string& string_name) :
  my_name(string_name) {};

CitizenNameBinar::CitizenNameBinar(
    const CitizenName& name1,
    const CitizenName& name2) {
  std::stringstream temp_ss;
  ss << name1 << "&" << name2;
  my_name = temp_ss.str();
}

ostream& operator<<(std::ostream& os, const CitizenNameNormal& name) {
  os << my_name;
  return os;
}

ostream& operator<<(std::ostream& os, const CitizenNameEmpty& name) {
  return os;
}
