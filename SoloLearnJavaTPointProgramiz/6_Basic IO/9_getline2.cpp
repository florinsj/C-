#include <iostream>
#include "stdc++.h"
using namespace std;
int main()
{

    string name;
    int id;

    cout << "Please enter your id: " << endl;
    cin >> id;

    cout << "Please enter your name:" << endl;
    getline(cin, name);
    cout << "your id is " << id << endl;
    cout << "Hello " << name << endl;
    return 0;
}