#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     
     if(number1 >= number2 && number1 >= number3)
        cout<<"Largest Number : " << number1;
    
    if(number2 >= number1 && number2 >= number3)
        cout<< "Largest Number: " << number2;
    
    if(number3 >= number1 && number3>= number2)
        cout<< "Largest Number : " << number3;
     return 0;
}