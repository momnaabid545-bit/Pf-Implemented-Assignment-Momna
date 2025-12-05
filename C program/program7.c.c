/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
      int rollNo;
    int pf, ic, cg;
    int total;
    float average;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter marks of Programming Fundamentals: ");
    scanf("%d", &pf);

    printf("Enter marks of Introduction to Computing: ");
    scanf("%d", &ic);

    printf("Enter marks of Computer Graphics: ");
    scanf("%d", &cg);

    total = pf + ic + cg;
    average = total / 3.0;

    printf("\nTotal Marks = %d\n", total);
    printf("Average = %.2f\n", average);
    
    return 0;
}
