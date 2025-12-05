/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;
    int age;
    float height;
    char gender;

    // Input student details
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in meters): ";
   cin >> height;

    cout << "Enter your gender (M/F): ";
    cin >> gender; 
 
 // Display student details
  
    cout << "\n--- Student Details ---\n";
    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << " years" << endl;
    cout << "Height : " << height << " meters" << endl;
    cout << "Gender : " << gender << endl;
    
    return 0;
    
}
    
  
   
   

    
    
    

   
    
