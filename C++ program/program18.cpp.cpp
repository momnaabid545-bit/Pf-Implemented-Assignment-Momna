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
  float vi, t, s;

    cout << "Enter value of initial velocity (vi): ";
    cin >> vi;

    cout << "Enter value of time (t): ";
    cin >> t;

    s = vi * t;  

    cout << "The value of s = " << s << endl;  

    return 0;
}