// JavaTPoint
//  static
// - belongs to type no instance,so an instance is not needed to access static members
// - in C++, static can be field, methods, cnstructor, class, properties, operator and event

// a static field is created in memory only one time and it's shared among all  objs of the class

#include <iostream>
using namespace std;

class Account
{
public:
    int accno;
    string name;
    static float rateOfInterest;
    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
    }

    void display()
    {
        cout << accno << " " << name << " " << rateOfInterest << endl;
    }
};

float Account::rateOfInterest = 6.5;
int main()
{
    Account a1 = Account(200, "Jenny");
    Account a2 = Account(220, "Jay");
    a1.display();
    a2.display();

    return 0;
}