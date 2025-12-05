/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int a, b, temp;
    a=5;
    b=6;
    //swapping
    temp = a;
    a = b;
    b = temp;

    printf("After interchange:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
