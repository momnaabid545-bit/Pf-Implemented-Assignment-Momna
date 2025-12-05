/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
    float radius, area; 
    cout << "Enter radius of the circle: ";
    cin >> radius;
    
    area = PI * radius * radius;

    cout << "Area of the circle = " << area << endl;


    return 0;
}
    