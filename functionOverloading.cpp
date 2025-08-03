#include <iostream>
using namespace std;

class Addition
{public:
    void sum(int a, int b)
    {
        cout<<a+b<<endl;
    }

    void sum(double a, int b, double c)
    {
        cout<<a+b+c<<endl;
    }

    void sum(int a, double b)
    {
        cout<<a+b<<endl;
    }
};

int main()
{
    Addition s1;
    s1.sum(4, 5);
    s1.sum(1.5, 2, 3.5);
    s1.sum(6, 3.5);
    return 0;
}