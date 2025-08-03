#include <iostream>
using namespace std;

class A
{
    string key = "@#$%#^&*!";
    friend class B;                    //friend class
    friend void revealSecret(A &obj);  //friend function
};

class B   //friend class of A
{public:
    void showSecret(A &obj)
    {
        cout<<obj.key<<endl;
    }
};

void revealSecret(A &obj)  //friend function of A
{
    cout<<obj.key<<endl;
}

int main()
{
    A a1;
    B b1;

    b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}