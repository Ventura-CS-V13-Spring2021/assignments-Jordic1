#include <iostream>
#include <cstdlib>
int holder;
int randNum = 0;
srand(time(0));
L = 10;
randNum=rand()%100;
int primer;
int check;

int IntegerArray::getLength(void) const
{
    return sizeof(N);
}

void IntegerArray::sortArray(int flag)
{
  if(flag = 0){
    for(i = 0; i < L; i++){
    for (j = i+1 ; j<L ; j++){
      if(N[i]>N[j]){
        holder = N[i];
        N[i] = N[j];
        N[j] = holder;
      }
    }
  }
  }else{
    for(i = 0; i < L; i ++){
      for(j=i + 1 ; j < L; i++){
        if(N[i] < N[j]){
          holder = N[i];
          N[i] = N[j];
          N[j] = holder;
        }
      }
    }
  }
}
void IntegerArray::fillUp(void)
{
  for(int i = 0; i < L; i++){
    N[i]=randNum;
  }
}
void IntegerArray::getPrimeNumber(void){
  for(i = 0; i < L; i++){
   primer =2; //since 1 and 2 are prime, this is used to check Numbers above 2.
   check = 1; // used to confirm prime number.
   while (primer < N[i]){
     if(N[i]%primer=0){
       check = 0;
     }
     primer = primer +1;
   }
   if (check == 1){
     cout<<N[i]<<endl;
   }
  }
}

void IntegerArray::printAll(void){
  return N[];
}