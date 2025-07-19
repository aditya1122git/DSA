#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[5] = {'a', 'b', 'c', 'd', '\0'};
    char str2[] = "aditya";

    cout<<str2<<" "<<strlen(str2);
    return 0;
}