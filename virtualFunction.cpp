#include <iostream>
using namespace std;

class Parent
{public:
    virtual void study()
    {
        cout<<"loves to study chemistry\n";
    }
};

class Child : public Parent
{public:
    void study()
    {
        cout<<"loves to study physics\n";
    }
};

int main()
{
    Child c1;
    Parent *ptr;

    ptr = &c1;
    ptr->study();
    return 0;
}