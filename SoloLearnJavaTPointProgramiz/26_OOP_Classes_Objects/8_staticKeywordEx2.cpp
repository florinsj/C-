// JavaTPoint
//  static

// example counting created objects

#include <iostream>
using namespace std;

class Car
{
public:
    int id;
    string brand;
    static int count;
    Car(int id, string brand) // constructor
    {
        this->id = id;
        this->brand = brand;
        count++;
    }
    void display()
    {
        cout << id << " " << brand << endl;
    }
};
int Car::count = 0;
int main()
{

    Car c1 = Car(1, "Mercedes");
    Car c2 = Car(2, "Bmw");
    Car c3 = Car(3, "Audi");
    c1.display();
    c2.display();
    c3.display();
    cout << "total created objects= " << Car::count << endl;

    return 0;
}
