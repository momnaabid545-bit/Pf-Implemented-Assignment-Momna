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
   float a, b, c, s, area;

    
    cout << "Enter the first side (a): ";
    cin >> a;

    cout << "Enter the second side (b):  ";
    cin >> b;

    cout << "Enter the third side (c): ";
    cin >> c;

   
    s = (a + b + c) / 2;

   
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    
    cout << "Area of the triangle = " << area << endl;

    return 0;
    
}
    
  
   
   

    
    
    

   
    
