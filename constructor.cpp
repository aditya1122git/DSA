#include <iostream>
using namespace std;

class Car
{
    string name;
    string color;

public:
    Car()  //non-parameterized constructor
    {
        cout<<"constructor without params\n";
    }

    Car(string name, string color)  //parameterized constructor 
    {
        cout<<"constructor with params\n";
        this->name = name;
        this->color = color;
    }

    void start()
    {
        cout<<"car has started..\n";
    }

    void stop()
    {
        cout<<"car has stopped..\n";
    }
}

int main()
{
    
    return 0;
}