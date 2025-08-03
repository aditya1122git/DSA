#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    for(int i=0; i<10; i++)
    {
        vec1.push_back(i);
        cout<<vec1[i]<<",";
    }
    return 0;
}