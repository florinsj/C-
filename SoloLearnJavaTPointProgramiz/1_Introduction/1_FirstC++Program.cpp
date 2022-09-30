//  javatpoint.com & programiz.com

#include <iostream>
// include standard input/output library functions; provides cin/cout functions  for input/output

#include <conio.h> // include console input/output library functions; getch() is in conio.h
using namespace std;

int main()
{
    // main() function is entry point in program
    // int =  return type for the main()   0 or 1    0(successfuly)  1(termination with errors)
    // void main() not permitted in C++

    // clrscr(); //function in conio.h  in old Borland C++, Turbo C++
    cout << "Welcome to C++ Programming!";
    getch(); // ask for a single char, until you press any key,it blocks the screen

    return 0;
}