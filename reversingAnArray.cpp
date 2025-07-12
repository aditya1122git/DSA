#include <iostream>
using namespace std;

int printArr(int *arr, int n)
{ 
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<",";
  }
}

int main()
{
  int arr[] = {2,3,9,4,8,10,7,2,3,0};
  int n = sizeof(arr) / sizeof(int);
  
  int copyArr[n];
  for(int i=0; i<n; i++)
  {
    int j = n-i-1;
    copyArr[i] = arr[j];
  }

  for(int i=0; i<n; i++)
  {
    arr[i] = copyArr[i];
  }
  
  printArr(arr, n);
  return 0;
}