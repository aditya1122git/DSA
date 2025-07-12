#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key)
{
  int st = 0, end = n-1;

  while(st <= end)
  { 
    int mid = (st + end) / 2;
    if(arr[mid] == key)
    {
        return mid; //Key found
    }
    else if(arr[mid] < key)
    {
         st = mid + 1; //2nd half
    }
    else
    {
         end = mid - 1; //1st half
    }
  }
  
  return -1;
}
int main()
{
  int arr[] = {0,2,2,3,3,4,7,8,9,10}; // Sorted array
  int n = sizeof(arr) / sizeof(int);

  cout<<binSearch(arr, n, 7)<<endl;
  return 0;
} 