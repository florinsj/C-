/*

cin.get()   = used to acces char array.It includes white spaces characters
            = read a string with the whitespace

syntax : cin.get(string_name,size);

            */

#include <iostream>
using namespace std;
int main()
{

    char name[25];
    cout << "Enter name:" << endl;
    cin.get(name, 25);
    cout << name;

    return 0;
}