#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *word, int n)
{
    int str = 0, end = n-1;
    while(str < end)
    {
        swap(word[str], word[end]);
        str++; end--;
    }

    cout<<word<<endl;
}

int main()
{
    char word[] = "aditya";
    reverse(word, strlen(word));
    
    return 0;
}