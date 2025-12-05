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
    
 float f, c;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    c = (5.0 / 9.0) * (f - 32);

    cout << "Temperature in Celsius = "<< c << endl;
    
    return 0;
    
}
    