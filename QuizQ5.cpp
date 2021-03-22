#include <iostream>
using namespace std;

int main()
{
  int lowerRange;
  int upperRange;
  int i;
  int flag;

  cout<<"Enter the range, starting from lower range."

  cin>>lowerRange>>upperRange;

  if(lowerRange > upperRange)
  {
    cout<<"Error: Lower is greater than upper."<<
    return 0;
  }
  while (lowerRange<upperRange)
  {
    flag = 0;

    for(i=2; i <= lowerRange/2;i++)
    {
      if(lowerRange%i ==0)
      {
        flag = 1;
        break;
      }
    }
    if(flag ==0)
    cout<<lowerRange<< " ";
    lowerRange++;
  }
  cout<<endl;
  return 0;
}