#include <iostream>
#include <cstdlib>
int holder;

int IntegerArray::getLength(void) const
{
    return sizeof(numbers);
    // return length;
}
int IntegerArray::getLastelm(void) const
{
     return numbers[getLength()-1];
    // return the value of the last element;
}
void IntegerArray::printAll(void) const
{
    return numbers[];
    // Print all elements
}
int randNum = 0;
srand(time(0));
N = 10;
randNum=rand()%100 + 1;
void IntegerArray::fillUp(void)
{
  for(int i = 0; i < N; i++){
    numbers[i]=randNum;
  }
    // Make up the array with the random integer values(0 to 100)

    // The array numbers has the maximum capacity with N.

    // Set N to the length.
}
void IntegerArray::sortAsc()
{
  for(i = 0; i < N; i++){
    for (j = i+1 ; j<N ; j++){
      if(numbers[i]>numbers[j]){
        holder = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = holder;
      }
    }
  }
    // Sort the array values with ascending order
}
void IntegerArray::removeLastelm(void)
{
  for(i=-1; i < N; i++){
    numbers[i]=numbers[i+1];

  }
  numbers[9]=[];
    // Decrease 1 from the length
}
void IntegerArray::appendElement(int v)
{
  Numbers[N]=v;
    // Append the value v to the array

    // length += 1;
}