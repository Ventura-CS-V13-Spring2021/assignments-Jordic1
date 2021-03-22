#include <iostream>
using namespace std;

int main()
{
  int lowerRange;
  int upperRange;
  
  cout<<"Enter the range, starting from lower range, from 0 to 99.\n";
  cin>>lowerRange>>upperRange;
  
  if((lowerRange>99||upperRange>99)||(lowerRange<0||upperRange<0))
  {
      cout<<"Your ranges do not lie within the bounds.";
  }
  
  if(lowerRange == upperRange)
  {
    cout<<"These numbers are duplicated"<<endl;
    cout<<lowerRange<<endl;
    cout<<upperRange<<endl;
  }
  
}