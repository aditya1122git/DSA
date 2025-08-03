#include <iostream>
using namespace std;

int setIthBit(int num, int i)
{
    int bitMask = 1 << i;
    return (num | bitMask);
}

int main()
{
    cout<<setIthBit(6, 3)<<endl;
    cout<<setIthBit(9, 1)<<endl;
    return 0;
}