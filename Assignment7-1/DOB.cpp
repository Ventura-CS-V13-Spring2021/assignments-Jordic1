#include <iostream>
#include <cstdlib>


int DOB::getMonth()const
{
  return month;
}
int DOB::getDay()const
{
  return day;
}
int DOB::getYear()const
{
  return year;
}
void DOB::printDate()const
{
  cout<< month<< " "<<day<<" "<<year;
}
void DOB::setDOB(int m, int d, int y)
{
  DOB = DOB(m, d, y);
}
void DOB::setMonth(int m)
{
  month = m;
}
void DOB::setDay(int d)
{
  day = d;
}
void DOB::setYear(int y)
{
  year = y;
}