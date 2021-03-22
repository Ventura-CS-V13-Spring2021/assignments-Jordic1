#include<iostream>
#include<fstream>
#include<cstdlib>
#include<time.h>

using namespace std;
int main(){
    
   srand(time(0));
   int ChosenNums;
   ofstream file("Lab 2-4-1");
   cout <<"Enter Integer Count: ";
   cin>>ChosenNums;
   int i;
   
   for(i=0;i<ChosenNums;i++){
   file<<rand()%100<<endl;  
   }
   file.close();
}