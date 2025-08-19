#include<bits/stdc++.h>

using namespace std; 

int countones(vector<int> & v1){
    int count = 0 ; 
    int max = 0 ;
    for (int i = 0; i < v1.size(); i++)
    {
        if((v1[i]==1 && v1[i+1]==1) || (v1[i]==1 && v1[i-1]==1) ){

            count++ ; 
            if(max<count){
                max = count; 
            }
        }
        else{
            count = 0 ; 
        }
    }

    return max ; 
    
}

int main() 
{
    vector<int> v1 = { 1,0,1,1,1,0,0};
    int count = countones(v1); 
    cout << "The number of consecutive ones are  " << count ; 

    return 0 ; 
}