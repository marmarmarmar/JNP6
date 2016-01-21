#include <iostream>
#include <string>

class CitizenName {
  public:
    ~CitizenName(void);
};

CitizenName::~CitizenName(void) { }

class CitizenNameNormal : public CitizenName {
  protected:
    std::string my_name;
  public:
    friend std::ostream& operator<<(
        std::ostream&,
        const CitizenNameNormal&);
    CitizenNameNormal(const std::string&);
};

class CitizenNameEmpty : public CitizenName {
    friend std::ostream& operator<<(
        std::ostream&,
        const CitizenNameEmpty&);
};

class CitizenNameBinar : public CitizenNameNormal {
  public:
    friend std::ostream& operator<<(
        std::ostream&,
        const CitizenNameBinar&);
    CitizenNameBinar(const CitizenNameBinar&, const CitizenNameBinar&);
};
