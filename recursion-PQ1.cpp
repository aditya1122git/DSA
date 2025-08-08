#include <iostream>
using namespace std;

//print no. from 1 to n
void printNum(int n)
{
    if(n == 0)
    {
        return;
    }

    cout<<n<<" ";
    printNum(n-1);
}

int main()
{
    printNum(10);
    return 0;
}