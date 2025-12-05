/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  int age, months, days;

    cout << "Enter your age in years: ";
    cin >> age;

    months = age * 12;        
    days = age * 365;         

    cout << "Your age in months = months" << months << endl;
    cout << "Your age in days   =  days" << days << endl;

    return 0;
}