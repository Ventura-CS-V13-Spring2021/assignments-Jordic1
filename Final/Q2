#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int arr[] = {-12,3,-12,4,1,1,-12,1,-1,1,2,3,4,2,3,-12};

  int temp;

  int length = sizeof(arr)/sizeof(arr[0]);

  for (int i = 0; i < length; i++)
  {
    for(int j = i + 1; j < length; j++)
    {
      if (arr[i] < arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  int counter = 1;
  cout<<setw(3)<<"N"<<setw(12)<<"Count"<<endl;

  for(int i = 0; i < length - 1; i++)
  {
    if(arr[i] == arr[i+1])
    {
      counter++;
    }
    else{ 
      cout << setw(3)<< arr[i]<<setw(8)<<counter<<endl;
      counter = 1;
    }
  }
  cout <<setw(3)<< arr[length-1]<<setw(8)<<counter<<endl;
}