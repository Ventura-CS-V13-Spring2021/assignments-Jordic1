#include <iostream>
using namespace std;

class Student 
{
	string name;
	int numClasses;
	string* classList;

public:
  Student():name(), numClasses(0), classList(NULL){};

  Student(string s, int num)
  {
    name = s;
    numClasses = num;
    ClassList = new string[num];

    for(int i = 0; i < numClasses; i++)
    {
      cout<<"Course name : "; //for testing
      cin >> classList[i];
    }
  }
  Student(Student& rhs)
  {
    numClasses = rhs.numClasses;
    name = rhs.name;
    classList = new string[numClasses];
    for(int i = 0; i < numClasses; i++)
    {
      classList[i] = rhs.classList[i];
    }
  }

void Student::output()
{
  cout<<"Name : " << name << endl;
  cout<<"Classes number : " << endl;
  for (int i = 0; i < numClasses; i++)
  {
    cout << classList[i]<<endl;
  }
}
void Student::classesReset()
{
  numClasses = 0;
  delete[] classlist;
}
void Student::input()
{
  cout<<"Enter name : "<<;
  cin>>name;
  cout<<"Enter number of classes";
  cin>>numClasses;
}
void Student::setName(string s)
{
  name = s;
}
void Student::getName()
{
return name;
}
int main()
{
  Student s1;
}
}