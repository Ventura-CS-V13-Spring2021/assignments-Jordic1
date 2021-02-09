#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double celcius;
    double fahrenheit;
    
    cout<<"Enter the temperature in Celcius"<<endl;
    cin>> celcius;
    
    fahrenheit = 9/5.0 * celcius + 32;
    
    cout<<celcius<<" Degrees Celcius " << " is " << fahrenheit << " Degrees Fahrenheit\n";
}
