#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
  srand(time(NULL));
  int int1 = rand()%100;
  int int2 = rand()%100;
  int int3 = rand()%100;
  int int4 = rand()%100;
  int int5 = rand()%100;
  cout<<"The  numbers are "<<int1<<" "<<int2<<" "<<int3<<" "<<int4<<" "<<int5<<endl;
if(int1 < int2)
{
  cout<<int2<<endl;
}
if(int2<int3)
{
  cout<<int3<<endl;
}
if(int3<int4)
{
  cout<<int4<<endl;
}
if(int4<int5)
{
  cout<<int5<<endl;
}

  
}