/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
   
int main() {
   
    char name[50];
    int age;
    float height;
    char gender;

    // Input student details
    printf("Enter your name: ");
    scanf("%[^\n]s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender); 

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d years\n", age);
    printf("Height : %.2f meters\n", height);
    printf("Gender : %c\n", gender);

    return 0;
    
}