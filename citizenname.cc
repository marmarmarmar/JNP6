#include "citizenname.hh"
#include <string>
#include <sstream>

CitizenNameNormal::CitizenNameNormal(void) :
  my_name("") {};

CitizenName::~CitizenName(void) {};
CitizenNameNormal::~CitizenNameNormal(void) {};
CitizenNameBinar::~CitizenNameBinar(void) {};
CitizenNameEmpty::~CitizenNameEmpty(void) {};

CitizenNameNormal::CitizenNameNormal(const std::string& string_name) :
  my_name(string_name) {};

CitizenNameBinar::CitizenNameBinar(
    const CitizenNameBinar& name1,
    const CitizenNameBinar& name2) {
  std::stringstream temp_ss;
  temp_ss << name1 << "&" << name2;
  my_name = temp_ss.str();
}

std::ostream& operator<<(std::ostream& os, const CitizenNameNormal& name) {
  os << name.my_name;
  return os;
}

std::ostream& operator<<(std::ostream& os, const CitizenNameBinar& name) {
  os << name.my_name;
  return os;
}

std::ostream& operator<<(std::ostream& os, const CitizenNameEmpty& name) {
  return os;
}
