// Sololearn
// logical operators
// logical operators are used to combine conditional statements
// &&   AND --> true if each condition from entire expression is true
// ||   OR  --> true if at least one condition from entire expression is true
// !    NOT --> single operand, reversing logical state -->!false=true
// all the logical operators can be combined
#include <iostream>
using namespace std;

int main()
{

    // AND
    int age = 20;
    int grade = 80;
    if (age > 16 && age < 60)
    {
        cout << "Accepted" << endl;
    }
    if (age > 16 && age < 60 && grade > 50)
    {
        cout << "Accepted" << endl;
    }

    // OR
    age = 16;
    int score = 90;
    if (age > 20 || score > 50)
    {
        cout << "Accepted!" << endl;
    }

    // NOT
    age = 10;
    if (!(age > 16))
    {
        cout << "Your age is less than 16" << endl;
    }

    return 0;
}