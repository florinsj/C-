// programiz.com

// function takes value as parameter
void f1(int numVal) // here we pass the value of numVal
{

    // code
}

// function takes reference as parameter
void f2(int &numref) // here we pass the address of numref insead of passing the value of numref
{
    // code
}

int main()
{
    int num = 5;

    // pass by value
    f1(num);

    // pass by reference
    f2(num);

    return 0;
}