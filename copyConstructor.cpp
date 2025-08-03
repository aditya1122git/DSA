#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;

    Car(string name, string color)  //bydefault copy constructor
    {
        this->name = name;
        this->color = color;
    }

    Car(Car &original)  //custom copy constructor
    {
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};

int main()
{
    Car c1("bmw x6", "black");
    Car c2(c1);  //custom copy constructor

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    return 0;
}