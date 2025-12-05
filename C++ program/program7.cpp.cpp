/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int rollNo;
    int pf, ic, cg;
    int total;
    float average;

    cout << "Enter Roll No: ";
    cin >> rollNo;

    cout << "Enter marks of Programming Fundamentals: ";
    cin >> pf;

    cout << "Enter marks of Introduction to Computing: ";
    cin >> ic;

    cout << "Enter marks of Computer Graphics: ";
    cin >> cg;

    total = pf + ic + cg;
    average = total / 3.0;

    cout << "\nTotal Marks = "<< total << endl;
    cout << "Average = " << average << endl;
    
    
    

    return 0;
}