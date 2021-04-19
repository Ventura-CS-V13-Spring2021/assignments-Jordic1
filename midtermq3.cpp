#include <iostream>
#include <random>
#include <fstream>
using namespace std;
int randint;
int min;
int max;
int difference;
int main()
{
    int num1,num2,num3;
    getRdnum(void);
    num1 = randint;
    getRdnum(void);
    num2 = randint;
    getRdnum(void);
    num3 = randint;
    
    findMax(num1, num2, num3);
    findMin(num1, num2, num3);
    getDifference(void);
    fileWrite(void);
    
}

int getRdnum(void)
{
    randint = rand()%10;
}

void findMin(int n1, int n2, int n3)
{
    if(n1<n2 && n1<n3)
    {
        min = n1;
    } else if(n2<n3 && n2<n1)
    {
        min = n2;
    }else
    {
        min = n3;
    }
    cout<<"The min is "<< min << endl;
}

void findMax(int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3)
    {
        max = n1;
    } else if(n2>n3 && n2>n1)
    {
        max = n2;
    }else
    {
        max = n3;
    }
    cout<<"The max is : "<< max << endl;
}

void getDifference(void)
{
    difference = (max - min);
    cout<<"The difference is : "<< difference << endl;
}

void fileWrite(void)
{
  ofstream myfile;
  myfile.open ("question3.txt");
  myfile <<difference<<endl;
  myfile.close();
}