#include <iostream>
#include <cstdlib>


string Address::getStreet() const
{
  return street;
}
string Address::getState() const
{
  return street;
}
int Address::getZip() const
{
  return zip;
}
void Address::printAddress() const
{
  cout<<" "<< address;
}
void Address::setStreet(string addr);
{
  street = addr;
}
void Address::setState(string st)
{
  state = st;
}
void Address::setZip(int z)
{
  zip = z;
}
void Address::setAddress(string addr, string st, int z){
  Address() = Address(addr,st,z);
}