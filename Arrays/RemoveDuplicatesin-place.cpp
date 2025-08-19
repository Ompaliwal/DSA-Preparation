#include<iostream>

using namespace std ; 


void removeduplicate(int arr[] , int n ){
    for (int i = 0; i < n-1; i++)
    {
        if( arr[i] == arr[i+1]){
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j+1]; 

            }

            n--; 
            
        }
    }

    cout<< "The updated array is "; 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    

}
int main(){
    int arr[6] = {1,2,3,3,4,51};
    int n =  sizeof(arr) / sizeof(arr[0]); 
    removeduplicate(arr, n );
}