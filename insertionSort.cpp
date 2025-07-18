#include <iostream>
using namespace std;

int printArr(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }

        arr[prev+1] = curr;
    }

    printArr(arr, n);
}

int main()
{
    int arr [5] = {2, 7, 9, 1, 0};
    insertionSort(arr, 5);
    return 0;
}