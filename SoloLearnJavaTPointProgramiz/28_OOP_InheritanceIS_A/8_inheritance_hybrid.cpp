// JavaTPoint
//  Hybrid inheritance= combination of more than one type of inheritance

#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void geta()
    {
        cout << "Enter a: " << endl;
        cin >> a;
    }
};

class B : public A
{
protected:
    int b;

public:
    void getb()
    {

        cout << "Enter b= " << endl;
        cin >> b;
    }
};
class C
{
protected:
    int c;

public:
    void getc()
    {
        cout << "Enter c: " << endl;
        cin >> c;
    }
};

class D : public B, public C
{
protected:
    int d;

public:
    void mul()
    {
        geta();
        getb();
        getc();
        cout << "a*b*c=" << a * b * c << endl;
    }
};
int main()
{
    D d;
    d.mul();
    return 0;
}