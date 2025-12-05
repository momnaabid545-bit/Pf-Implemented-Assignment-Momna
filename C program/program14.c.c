/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
   
int main() {
    float mm, inches;

    printf("Enter value in millimetres: ");
    scanf("%f", &mm);

    inches = mm / 25.4;  

    printf("%.2f millimetres = %.2f inches\n", mm, inches);
    
    return 0;
    
}
