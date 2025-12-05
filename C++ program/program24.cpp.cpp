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
   float marks[5], total = 0, average;
    int i;

    
    for(i = 0; i < 5; i++) {
        cout << "Enter marks for subject: " << i+1 << ":";
        cin >> marks[i];
        total += marks[i]; 
    }

   
    average = total / 5;

    
    cout << "Total Marks   = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
    
}
    
  
   
   

    
    
    

   
    
