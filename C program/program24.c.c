/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
   
int main() {
   
    float marks[5], total = 0, average;
    int i;

    // Input marks for 5 subjects
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d (out of 100): ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i]; 
    }

    // Calculate average
    average = total / 5;

    // Display results
    printf("\nTotal Marks   = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);


    return 0;
    
}