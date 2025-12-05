/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
   
int main() {
   
  float num = 15.58971;
    int integralPart;
    float fractionalPart;

    integralPart = (int)num;         
    fractionalPart = num - integralPart; 
    
    printf("Number: %.5f\n", num);
    printf("Integral Part = %d\n", integralPart);
    printf("Fractional Part = %.5f\n", fractionalPart);
    
    return 0;
}