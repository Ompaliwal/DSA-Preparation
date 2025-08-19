// #include <iostream>
// using namespace std;

// void shiftzeros(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             for (int j = i; j <= n - 1; j++)
//             {
//                 arr[j] = arr[j + 1];
//             }

//             arr[n-1] = 0;

            
//         }
//     }

//     cout << "The updated array is " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {

//     int arr[5] = {1, 0, 2, 0, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     shiftzeros(arr, n);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}


int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}

