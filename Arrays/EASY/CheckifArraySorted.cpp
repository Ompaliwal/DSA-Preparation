#include<iostream>
using namespace std ; 

bool issorted(int arr[] , int n  ){ 
    int increment = 0 ; 
    int decrement = 0 ; 
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= arr[i+1])
        {
            increment++; 
        }

        if(arr[i] >= arr[i+1])
        {
            decrement++; 
        }

    }

    if(decrement == n || increment == n){
        return true ; 

    } 

    return false ; 
    
}

int main() { 
    int arr[5] = {1,2,31,4,5} ; 
    int n = sizeof(arr)/ sizeof(arr[0]);
    bool result = issorted(arr, n); 
    cout << result ; 
    return 0 ; 
}