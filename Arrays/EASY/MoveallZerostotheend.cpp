#include <iostream>
using namespace std;

void shiftzeros(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j <= n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            arr[n-1] = 0;

            
        }
    }

    cout << "The updated array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{

    int arr[5] = {1, 0, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    shiftzeros(arr, n);

    return 0;
}