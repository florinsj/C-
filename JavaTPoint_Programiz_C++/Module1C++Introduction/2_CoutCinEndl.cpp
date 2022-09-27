// output operation = bytes flow from main memory to display,network,etc
// input operation = bytes flow from display,keyboard,network etc to main memory

// <iostream> contains cout, cin, cerr
// cout= standard output stream; cout object is defined in "std" namespace
// cin= standard input stream; cin object is defined in "std" namespace
// cerr= standard error stream

// <iomanip>  is used to declare services for performing preformated I/O like "setprecison", "setw"

// <fstream> is used to declare services for user controlled file processing

#include <iostream>
using namespace std;

int main()
{
    char array[] = "Welcome to C++";
    cout << "Value of array is: " << array << endl;
    // "cout" used with insertion operator "<<"
    // endl= standard end line, the cursor move to next line, similar to "\n", insert a new line

    // std::cout<<"Value of array is: "<<endl;
    //  we can use this form if we don't include "using namespace std;"

    int age;
    cout << "Enter your age: ";
    cin >> age; // "cin" used with extraction operator ">>"
    cout << "Your age is " << age << endl;

    return 0;
}