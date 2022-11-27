#include <iostream>
#include <string>
using namespace std;

void display(char *); // function prototype  - takes a char array parameter
void display(string); // function prototype  - takes a string object parameter

int main()
{

    string str1;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << endl
         << "Enter another string: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
}

void display(string s)
{
    cout << endl
         << "You entered: " << s;
}
void display(char s[])
{
    cout << endl
         << "You entered: " << s;
}