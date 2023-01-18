// cplusplus.com
// inheritance an constructors

#include <iostream>
using namespace std;

class Mother
{
public:
    Mother()
    {
        cout << "Mother constructor  - no parameters" << endl;
    }
    Mother(int a)
    {
        cout << "Mother constructor - one parameter= " << a << endl;
    }
};

class Daughter : public Mother
{

public:
    Daughter(int a) // Mother constructor with no param will be called automaticaly
    {
        cout << "Daughter constructor -one parameter= " << a << endl;
    }
};

class Son : public Mother
{
public:
    Son(int a) : Mother(a) // here we call explicitly  Mother constructor with one parameter
    {
        cout << "Son constructor -one parameter= " << a << endl;
    }
};

int main()
{
    Daughter kelly(0);
    Son bud(1);
}
