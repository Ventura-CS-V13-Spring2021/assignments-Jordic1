#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int beginningRange ;
	int endRange;
    int loopCounter=0;
    
	cout << " What is the beginning of the range?: "; cin>> beginningRange;
	cout << " What is the end of the range? : "; cin>> endRange;		

	cout << "The prime numbers between "<<beginningRange<<" and "<<endRange<<" are:"<<endl;
    for(int i=beginningRange; i<=endRange; i++)
       {
           for(int j=2; j<=sqrt(i); j++)
               {
                   
               if(i%j == 0)
               
                  loopCounter++;
               }
               if(loopCounter==0 && i!=1)
               { 
                 cout << i << " ";
                 loopCounter=0;
               }
               loopCounter=0;
       }
 return 1;
}