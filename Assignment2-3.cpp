#include <iostream>
using namespace std;
int main()
{
     char  selection;
     
     cout << "Enter your choice among A, B, C\n";
     cin >> selection;
     
    switch(selection)
    {
        case 'A': cout<<"You entered A.\n";
            break;
        case 'B': cout<<"You entered B.\n";
            break;
        case 'C': cout<<"You entered C.\n";
            break;
        default: cout<<"POOR CHOICE\n";
    }
     return 0;
}