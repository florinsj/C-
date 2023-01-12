// using pointers with structurescout
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};

int main()
{

    Distance *ptr, d; // d=var of type Distance,  ptr=pointer of type Distance

    ptr = &d; // ptr = address of d

    // in the case of pointers wich points to structs, we can use "->" operator
    // (*ptr).inch <==> ptr->inch
    cout << "Enter feet: " << endl;
    cin >> (*ptr).feet; // same with cin>>ptr->feet;

    cout << "Enter inch: " << endl;
    cin >> ptr->inch; //(*ptr).inch;
    cout << "Display info: " << endl;
    cout << "Distance= " << (*ptr).feet << " feet and " << (*ptr).inch << " inches";
}