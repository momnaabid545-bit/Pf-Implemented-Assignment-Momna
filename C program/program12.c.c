/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    const float PI = 3.14159; // const qualifier
    float radius, height, volume;

    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    printf("Volume of the cylinder = %.2f\n", volume);


    return 0;
}
