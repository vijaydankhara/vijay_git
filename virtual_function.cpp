// runtime polimophisom
// virtul function

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void showPrint() // virtual function
    {
        cout << "Base class output print ---> " << endl;
    }
};

class Derived : public Base
{
public:
    void showPrint()
    {
        cout << "Derived class output print ---> " << endl;
    }
};

int main()
{
    Base a, *b;
    Derived d;

    b = &a;
    b->showPrint();

    b = &d;
    b->showPrint();
}