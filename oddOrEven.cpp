#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(!(num & 1))
    {
        cout<<"even\n";
    }
    else
    {
        cout<<"odd\n";
    }
    return 0;
}