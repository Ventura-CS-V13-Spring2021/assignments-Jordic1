#include <iostream>

Coordinate Rectangle::getLB()const{
  return lb;
}
Coordinate Rectangle::getRT(){
  return rt;
}
double Rectangle::getArea(){
  double area = ((rt.getX()-lb.getX())/2
  return area;
}