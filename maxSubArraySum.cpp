#include <iostream>
#include <climits>
using namespace std;

// Bruteforce approach to find maximum subarray sum
void maxSubArraySum1(int *arr, int n)
{   
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++)
    {
        for(int end=start; end<n; end++)
        { 
          int currSum = 0;  
          for(int i=start; i<=end; i++)
          {
            currSum += arr[i];
          }

          cout<<currSum<<",";
          maxSum = max(maxSum, currSum);  
        }
        
        cout<<endl;
    }

    cout<<"maximum subarray sum = "<<maxSum<<endl;
}


// Bruteforce but optimized method to find maximum subarray sum
void maxSubArraySum2(int *arr, int n)
{   
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++)
    {
        int currSum = 0;

        for(int end=start; end<n; end++)
        { 
          currSum += arr[end];  
          maxSum = max(maxSum, currSum);  
        }
        
    }

    cout<<"maximum subarray sum = "<<maxSum<<endl;
}

//Kadane's Algorithm to find max subarray sum
void maxSubArraySum3(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0)
        {
            currSum = 0;
        }
    }

    cout<<"maximum subarray sum = "<<maxSum<<endl;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubArraySum3(arr, n);

    return 0;
}