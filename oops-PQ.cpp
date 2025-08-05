#include <iostream>
using namespace std;

class User
{
    int id;
    string password;

public:
    string username;
    
    User(int id)
    {
        this->id = id;
    }

    string getPassword()
    {
        return password;
    }

    void setPassword(string password)
    {
        this->password = password;
    }
};

int main()
{
    User user1(101);
    user1.username = "adityaraj";
    user1.setPassword("abcd");

    cout<<"username : "<<user1.username<<endl;
    cout<<"password : "<<user1.getPassword()<<endl;
    return 0;
}
