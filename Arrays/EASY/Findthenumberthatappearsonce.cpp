#include<bits/stdc++.h>
using namespace std ; 


int appearonce(vector<int> & v1){
    int num = 0; 
    for (int i = 0; i < v1.size(); i++)
    {
        num = num ^ v1[i] ; 
    }
    

    return num; 
}

int main (){
    vector<int> v1 = {1,2,3,4,3,2,1}; 
    int num = appearonce(v1); 
    cout << "The number that appear once is " << num ; 
    return 0 ; 
}