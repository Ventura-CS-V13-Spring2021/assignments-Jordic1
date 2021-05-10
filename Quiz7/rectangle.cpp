#include <iostream>

Coordinate Rectangle::getLB()const{
  return lb;
}
Coordinate Rectangle::getRT(){
  return rt;
}
double Rectangle::getArea(){
  double area = ((rt.getX()-lb.getX()) * (rt.getY()-lb.getY)));
  return area;
}
Coordinate Coordinate::getCenter(){
  double first = (lb.getX()+(rt.getX())-rt.getX()))/2;
  double second = (lb.getY()+(rt.getY())-rt.getY()))/2;
}

