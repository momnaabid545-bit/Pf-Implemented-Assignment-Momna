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
    
 float num = 15.58971;
    int integralPart;
    float fractionalPart;

    integralPart = (int)num;         
    fractionalPart = num - integralPart; 
    
    cout << "Number: " << num << endl;
    cout << "Integral Part = " << integralPart << endl;
    cout << "Fractional Part = " << fractionalPart << endl;
    return 0;
}