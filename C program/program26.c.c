/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
   
int main() {
   
    float rupees = 12000;
    float dollars;
    const float rate = 60;  

    dollars = rupees / rate;

    printf("Rs. %.2f = $%.2f\n", rupees, dollars);

   
   

    return 0;
    
}