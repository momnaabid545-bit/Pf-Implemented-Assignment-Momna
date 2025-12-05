/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
   
int main() {
   
  
     int age, months, days;

    printf("Enter your age in years: ");
    scanf("%d", &age);

    months = age * 12;        
    days = age * 365;         

    printf("Your age in months = %d months\n", months);
    printf("Your age in days   = %d days\n", days);
    return 0;
    
}