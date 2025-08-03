#include <iostream>
using namespace std;

bool isPowerOf2(int num)
{
    if(!(num & (num-1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<isPowerOf2(35)<<endl;
    cout<<isPowerOf2(16)<<endl;
    return 0;
}