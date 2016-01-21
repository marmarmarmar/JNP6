#include <iostream>
#include <string>

class CitizenName {
  public:
    virtual ~CitizenName(void) = 0;
};

class CitizenNameNormal : public CitizenName {
  protected:
    std::string my_name;
  public:
    ~CitizenNameNormal(void);
    CitizenNameNormal(const std::string&);
    CitizenNameNormal(void);
    friend std::ostream& operator<<(
        std::ostream&,
        const CitizenNameNormal&);
};

class CitizenNameEmpty : public CitizenName {
  public:
    ~CitizenNameEmpty(void);
    friend std::ostream& operator<<(
        std::ostream&,
        const CitizenNameEmpty&);
};

class CitizenNameBinar : public CitizenNameNormal {
  public:
    ~CitizenNameBinar(void);
    friend std::ostream& operator<<(
        std::ostream&,
        const CitizenNameBinar&);
    CitizenNameBinar(const CitizenNameBinar&, const CitizenNameBinar&);
};
