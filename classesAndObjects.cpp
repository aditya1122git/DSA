#include <iostream>
using namespace std;

class Student
{
    //Attributes
    string name;
    float cgpa;

    //Functions
    void getPercentage()
    {
        cout<<(cgpa * 10)<<endl;
    }
};

class User
{
    int id;
    string username;
    string password;
    string bio;

    void deactivate()
    {
        cout<<"deleting account\n";
    }

    void editBio(string newBio)
    { 
        bio = newBio;
    }
};

int main()
{
    Student s1;
    
    return 0;
}