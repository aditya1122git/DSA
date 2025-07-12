#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {2,3,9,4,8};

  int max = arr[0];
   
  for(int i=1; i<5; i++)
  if(arr[i] > max)
  {
    max = arr[i];
  }
  cout<<"Largest Element is : "<<max;
   
  return 0;
}