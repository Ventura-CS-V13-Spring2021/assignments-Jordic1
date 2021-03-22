#include<iostream>
#include<fstream>

using namespace std;
int main(){
   int num;
   int iter=0;
   int max=0;
   int min=0;
   int sum=0;
   float average;
   ifstream file("random.txt");
       file>>num;
   while(!file.eof()){

       iter++;

       sum=sum+num;

       if(num>max){
           
           max=num;
       }
       if(num<min){
           min=num;
       }

       file>>num;  
   }

   file.close();

   cout<<"Number of integers : "<<   iter   <<endl;
   cout<<"Min: "<<   min   <<endl;
   cout<<"Max: "<<   max   <<endl;
   cout<<"Sum:"<<   sum   <<endl;
   average=sum/iter;
   cout<<"Average: "<<average<<endl;
  

}