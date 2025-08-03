#include <iostream>
using namespace std;

class Parent
{public:
    void study()
    {
        cout<<"loves to study chemistry\n";
    }
};

class Child : public Parent
{public:
    void study()
    {
        cout<<"loves to study maths\n";
    }
};

int main()
{
    Child c1;
    c1.study();
    return 0;
}