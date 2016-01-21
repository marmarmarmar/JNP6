#include <iostream>
#include <string>

class CitizenNameInterface {
  public:
    ~CitizenNameInterface(void);
    virtual friend ostream& operator<<(
        std::ostream&,
        const CitizenNameInterface&) = 0;
}

CitizenNameInterface::~CitizenNameInterface(void) { }

class CitizenNameNormal : public CitizenNameInterface {
  protected:
    std::string my_name;
  public:
    CitizenNameNormal(const std::string&);
};

class CitizenNameEmpty : public CitizenNameInterface {
};

class CitizenNameBinar : public CitizenNameNormal {
  public:
    CitizenNameBinar(const CitizenName&, const CitizenName&);
};
