#include <iostream>
using namespace std;

class Father
{public:
    string name;
    string haircolor;

    void canWalk()
    {
        cout<<"walks\n";
    }
};

class Mother
{public:
    string eyecolor;
    float height;

    void canCook()
    {
        cout<<"cooks\n";
    }
};

class Child : public Father, public Mother
{public:
    string job;
};

int main()
{
    Child c1;
    c1.name = "Raj";
    c1.height = 5.7;
    c1.haircolor = "black";
    c1.eyecolor = "brown";
    c1.job = "IT";

    cout<<c1.name<<endl;
    cout<<c1.height<<endl;
    cout<<c1.haircolor<<endl;
    cout<<c1.eyecolor<<endl;
    cout<<c1.job<<endl;
    c1.canWalk();
    c1.canCook();
    return 0;
}