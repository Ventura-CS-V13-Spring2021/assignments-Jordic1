#include <iostream>
#include <array>

using namespace std;

int main(){
  int arr[6] = {1,2,4,6,10,24};
  int length = sizeof(arr)/sizeof(arr[0]);
  int newArr[length];
  int lengthNewArr = sizeof(newArr)/sizeof(newArr[0]);

  int i = 0;
  while(i < length)
  {
    int counter = 0;
    int j = 1;
    while(j < length)
    {
      if (arr[i] % arr[j] == 0)
      {
        counter++;

      }
      j++;
    }
    newArr[i] = counter;
    i++;
  }
  int lim = 0;
  int element = 0;

  for (int i = 0; i < lengthNewArr; i++)
  {
    if (newArr[i]> lim)
    {
      lim = newArr[i];
      element = i;
    }
  }
  cout<< " The Element" << arr[element]<< " is the element with the most number of divisible values : " << lim;
}