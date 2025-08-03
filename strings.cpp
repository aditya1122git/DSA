#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout<<str<<endl;

    //member functions
    cout<<str.length()<<endl;      //return length of string
    cout<<str.at(11)<<endl;        //return character at given index
    cout<<str.substr(11, 3)<<endl; //return substring from given starting index and length
    cout<<str.find("Raj")<<endl;   //return the index of first letter given word 


    return 0;
}