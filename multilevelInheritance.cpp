#include <iostream>
using namespace std;

class Animal
{public:
    string color;

    void eat()
    {
        cout<<"eats\n";
    }

    void breathe()
    {
        cout<<"breathes\n";
    }
};

class Mammal : public Animal
{public:
    string bloodtype;

    void breastFeed()
    {
        cout<<"breast feeding to offsprings\n";
    }
};

class Whale : public Mammal
{public:

    void swim()
    {
        cout<<"swims\n";
    }

};

int main()
{
    Whale w1;
    w1.color = "blue";
    w1.bloodtype = "warm blooded";
    
    cout<<w1.color<<endl;
    cout<<w1.bloodtype<<endl;
    w1.eat();
    w1.swim();

    return 0;
}