// runtime polymorphism can be achieved by data members in C++

#include <iostream>
using namespace std;

class Animal
{
public:
    string color = "Black";
};
class Dog : public Animal
{
public:
    string color = "Grey";
};
int main()
{

    Animal d1 = Dog();
    cout << d1.color << endl;

    return 0;
}