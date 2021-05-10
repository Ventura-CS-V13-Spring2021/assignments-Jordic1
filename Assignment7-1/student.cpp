#include <iostream>
#include <cstdlib>




int Student::getID() const
{
  return id;
}
string Student::getSname() const
{
  return sname;
}
void Student::setSname(string name)
{
  sname = name;
}
void Student::setID(int num)
{
  id = num;
}
void Student::setDOB(DOB dob)
{
  DOB = dob;
}
void Student::setAddress(Address addr)
{
  address = adr;
}