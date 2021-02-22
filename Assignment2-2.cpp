#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     
     if(number1 == number2 && number2 == number3)
        cout<<"All Numbers are the same";
     else if (number1 == number2 || number1 == number3 || number2 == number3)
        cout<<"Two numbers are duplicated.";
     else 
        cout<<"All numbers are distinct!";
     return 0;
}