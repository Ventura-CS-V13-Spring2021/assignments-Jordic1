#include <iostream>
#include <random>
#include <fstream>
using namespace std;
int randint;
int numOfNum = 10;
int tmp1, tmp2;
int main()
{
    
    fileWrite();
    
}

int getRdnum(void)
{
    randint = (rand()%50) + 1;
}

int isGreater(int n)
{
    for(int i =0; i<numOfNums; i++)
    {
       getRdnum();
       tmp1 = randint;
       getRdnum();
       tmp2 = randint;
    }
}
