#include <iostream>
using namespace std;

int main ()
{ 
// printing values stored in array
 int arr[5] = {1,2,3,4,5};

 for(int i=0; i<5; i++)
 {
    cout<<arr[i]<<endl;
 }

// taking input in array from terminal
int arr[5];

for(int i=0; i<5; i++)
{
    cin>>arr[i];
}

for(int i=0; i<5; i++)
{
    cout<<arr[i]<<",";
}

//dynamic memory allocation - allocation during runtime
int n;
cout<<"Enter length of array: ";
cin>>n;

int arr[n];

for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<",";
}

  return 0;
}