#include <iostream>
#include <fstream>
using namespace std;
std::ifstream infile("students.txt");
int count = 1;
int a,b;
double avg;
int sum;
int main()
{

    

}

void fileRead(void)
{
  ifstream myfile;
  myfile.open ("students.txt");
  while(std::getline(infile,line))
  {
    std::istringstream iss(line)
    if(count%2==0)
    {
        while(infile>>a>>b)
        {
            summation(a,b);
            average(a,b);
            
            cout<<" Score 1 : "<< a << " Score 2 : " << b << " Sum : " << sum << " Average : " << avg << endl;
        }
    }else
    {
        println;
    }
  }
  myfile.close();
}
int summation(int n1, int n2)
{
    sum = n1 + n2;
}
double average(int n1, int n2)
{
    avg = sum/2;
}