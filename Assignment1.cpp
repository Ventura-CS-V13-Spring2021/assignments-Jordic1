#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double ClassA = 15.00;
  const double ClassB = 12.00;
  const double ClassC = 9.00;

  double SeatA;
  double SeatB;
  double SeatC;

  cout<<"How many tickets per seat A B and C?"<<endl;
  
  cin>>SeatA>>SeatB>>SeatC;

  double TotalA = ClassA * SeatA;
  double TotalB = ClassA * SeatB;
  double TotalC = ClassC * SeatC;

  double Total_Amount = TotalA + TotalB + TotalC;
  cout<<"Total made is : "<<endl;
  cout<<fixed<<setprecision(2)<<Total_Amount<<endl;
}