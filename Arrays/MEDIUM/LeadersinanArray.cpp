#include<bits/stdc++.h>
using namespace std ; 

void leader( vector<int> & v1) { 

    vector<int> leader ; 
    int max = v1[n-1]; 
    int index= 0 ; 
    for (int i = n-1; i > 0; i--)
    {
        if(v1[i] >= max){
            leader[index] = v1[i] ; 
            index++; 
        }


    }
    
}

int main (){ 
    vector<int> v1 = { 10, 22, 12, 3, 0, 6};
    leader(v1); 
    return 0 ; 
}