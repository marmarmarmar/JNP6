#include <iostream>

template <typename T>
class Citizen {

  public :

    virtual ~Citizen() = 0; // Defined to be an abstract class
    virtual friend ostream& operator<<(ostream&, const Citizen<T>&);

};

template <typename T>
class CitizenWithName : public Citizen<T> {
  String name;

  public :

  CitizenWithName(const String&);
  virtual friend ostream& operator<<(ostream& os, const CitizenWithName<T>&);
}

template <typename T>
class CitizenWithoutName : public Citizen<T> {

  public :
    virtual friend ostream& operator<<(ostream&, const CitizenWithoutName<T>&);
}
// TODO : implement rest
