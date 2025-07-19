#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *word, int n)
{
    int st = 0, end = n-1;
    while(st < end)
    {
        if(word[st] != word[end])
        {
            cout<<word<<" is not a palindrome";
            return false;
        }
        st++; end--;
    }
    
    cout<<word<<" is a palindrome";
}

int main()
{
    char word[] = "racecar";
    isPalindrome(word, strlen(word));
    
    return 0;
}