// JavaTPoint , cplusplus.com
// classes= expand concept of structures, like struct contains data members but also fuctions
// object = instantiation of a class, class= type, object= the variable

/*
syntax:
class class_name {
access_specifier1:
type member1;
access_specifier2:
member2;
....
} variable_object;



where access specifier = private,public or protected
private members     = accessible from members from the same class or from "friends"
protected memebres  = accessible from members from the same class or from "friends" + derived class
public members      = accessible from anywhere the object is visible

by default in C++ all members from the class are private automatically
*/

/* example
we define a class and an object variable in the same declaration

class Rectangle {
int width,height;
public :
void setValues(int i,int j) {

}
int area() {

}

} rect;

*/

// object can access members using  dot "."   ex. obj.memberX=2; rect.setvalues(2,2);

#include <iostream>
using namespace std;
class Student
{

public:
    int id;      // data member (also instance variable)
    string name; // data member (also instance variable)
};

int main()
{
    Student s1; // creating an object of type Student
    s1.id = 201;
    s1.name = "Joe";
    cout << s1.id << endl;
    cout << s1.name << endl;

    return 0;
}