#include <iostream>
using namespace std;

int main()
{
  //Smallest Element in Array
  int arr[6] = {2,3,9,4,8,0};

  int min = arr[0];
   
  for(int i=1; i<6; i++)
  if(arr[i] < min)
  {
    min = arr[i];
  }
  cout<<"Smallest Element is : "<<min;
   
   
   
  return 0;
}
