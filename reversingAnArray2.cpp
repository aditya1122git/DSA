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
  // Reversing an array using two pointer method
  int arr[] = {2,3,9,4,8,10,7,2,3,0};
  int n = sizeof(arr) / sizeof(int);

  int start = 0, end = n-1;

  while(start < end)
  { 
    //1. Using temp variable
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    //2. Using swap function
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  
  printArr(arr, n);
  return 0;
} 