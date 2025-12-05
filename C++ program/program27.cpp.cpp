/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int hours, minutes, seconds, totalSeconds;
    cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

   cout << "Enter seconds: ";
    cin >> seconds;

   
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;


   cout << "Total time in seconds = " <<  totalSeconds << endl;
    return 0;
    
}
    
  
   
   

    
    
    

   
    
