#include <iostream>
using namespace std;

//sum of nth natural no.
int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + sum(n-1);    
}

int main()
{
    cout<<sum(5)<<endl;
    return 0;
}