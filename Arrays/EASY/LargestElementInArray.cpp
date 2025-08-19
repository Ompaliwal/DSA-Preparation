#include<iostream>
using namespace std; 

int LargestElement(int arr[], int n ){

    int max = 0 ; 
for (int i = 0; i < n; i++)
{
    if(max<arr[i]){
        max = arr[i];
    }


}
return max; 


}


int main(){
    int arr[5] = {1,4,20,2,44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = LargestElement(arr , n); 
    cout << max; 
    return 0; 
}