#include<bits/stdc++.h>

using namespace std; 

int countones(vector<int> & v1){
    int count = 0 ; 
    int maxCount = 0 ;
    for (int i = 0; i < v1.size(); i++)
    {
        if(v1[i]==1){

            count++ ; 
         maxCount = max(maxCount, count);
        }
        else{
            count = 0 ; 
        }
    }

    return maxCount ; 
    
}

int main() 
{
    vector<int> v1 = { 1,0,1,1,1,1,0,1,1,1,1,1,1 ,0,0};
    int count = countones(v1); 
    cout << "The number of consecutive ones are  " << count ; 

    return 0 ; 
}