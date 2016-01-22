#ifndef __CITIZENNAME_HH__
#define __CITIZENNAME_HH__

#include <iostream>
#include <string>

class CitizenName {

  protected:
    std::string my_name;
    
  public:
    ~CitizenName(void) {};
    CitizenName(void) {};
    CitizenName(const std::string&);
    CitizenName(const CitizenName&, const CitizenName&);

    friend std::ostream& operator<<(
        std::ostream&,
        const CitizenName&);
};
#endif /*__CITIZENNAME_HH__*/
