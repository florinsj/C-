// javaTPoint -- functions
// function in C++   <==>   procedure/subroutine in other languages
// it provide modularity and code reusability
// code optimization - we write the function once and use it many times in code

// types of functions :
//  ** library functions= functions declared in C++ header files ( ex. ceil(x),cos(x))
//  ** user defined functions= functions created by c++ programmer

// syntax:  returnType functionName(dataType parameter..) { // function body - code to be executed }

// example of function

#include <iostream>
using namespace std;

void func() // return type is void == no return
{
    static int i = 0; // static var  - declared only at first call of function
    int j = 0;        // local var;
    i++;              // static var keeps the value of previous call until the end of the program
    j++;
    cout << "i= " << i << " j= " << j << endl;
}

int main()
{
    func(); // first call : i=1 j=1
    func(); // second call: i=2 j=1 ; i=2 because is a static var and last time was i=1;i++ ==> i=2
    func(); // third call : i=3 j=1 ; i=3 because is a static var and last time was i=2;i++ ==> i=3
    return 0;
}