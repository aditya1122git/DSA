#include <iostream>
using namespace std;

void diagonalSum(int mat[] [4], int n)
{
    int sum = 0;

    // O(n^2)
    // for(int i=0; i<n; i++) //rows
    // {
    //     for(int j=0; j<n; j++) //columns
    //     {
    //         if(i == j)
    //         {
    //             sum += mat[i] [j];  //pd sum
    //         }
    //         else if(j == n-i-1)
    //         {
    //             sum += mat[i] [j];  //sd sum
    //         }
    //     }
    // }

    //O(n)
    for(int i=0; i<n; i++)
    {
        sum += mat[i] [i];
        if(i != n-i-1)
        {
            sum += mat[i] [i];
        }
    }

    cout<<"sum = "<<sum<<endl;
}

int main()
{
    int mat[4] [4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    diagonalSum(mat, 4);

    return 0;
}