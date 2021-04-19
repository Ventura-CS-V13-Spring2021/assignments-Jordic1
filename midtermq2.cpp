#include <iostream>
#include <random>
#include <fstream>
using namespace std;
int randint;
int numOfNum = 10;
int tmp1, tmp2;
int main()
{
    
    for(int i =0; i<numOfNum; i++)
    {
       if(i==0)
       {
             getRdnum();
             tmp1 = randint;
             getRdnum();
            tmp2 = randint;
            if(isGreater(tmp1)==1)
       {
           fileWrite();
       }
       
       }else{
           
       
       tmp1 = tmp2;
       getRdnum();
       tmp2 = randint;
       if(isGreater(tmp1)==1)
       {
           fileWrite();
       }
    }
    }
}

int getRdnum(void)
{
    randint = (rand()%50) + 1;
}

int isGreater(int n)
{

    if(n>tmp2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

fileWrite()
{
  ofstream myfile;
  myfile.open ("numbers.txt");
  myfile <<tmp1<<endl;
  myfile.close();
}