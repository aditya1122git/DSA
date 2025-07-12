#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
  for(int i=0; i<n; i++)
  {
    if(arr[i] == key)
    {
        return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2,3,9,4,8,10,7,2,3,0};
  int n = sizeof(arr) / sizeof(int);
  
  cout<<linearSearch(arr, n, 0)<<endl;
  

  return 0;
}