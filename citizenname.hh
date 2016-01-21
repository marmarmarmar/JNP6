#include <iostream>
#include <string>

class CitizenNameInterface {
  public:
  std::string toString(void);
  virtual friend operator<<(std::ostream&,
      const CitizenNameInterface&) = 0;
}

class CitizenNameNormal : public CitizenNameInterface {
  std::string my_name;
  public:
  CitizenNameNormal(const std::string&);
};

class CitizenNameEmpty : public CitizenNameInterface {
};

class CitizenNameBinar : public CitizenNameInterface {
  public:
  CitizenNameBinar(const CitizenName&, const CitizenName&);
};
