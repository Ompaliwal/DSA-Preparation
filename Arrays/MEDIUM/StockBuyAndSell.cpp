#include<bits/stdc++.h>
using namespace std ; 

void beststock(vector<int> & v1){
    int n = v1.size(); 
    int buy = v1[0]; 
    int sell = v1[n-1] ; 
    i = 0 ; 
    j = n-1; 
    while (i<j)
    {
        if(buy>v1[i])
        {
            buy = v1[i];
        }

        if(sell<v1[j])
        {
            sell = v1[j];
        }
        i++; 
        j--; 
    }

    int profit = buy - sell ; 

    cout << "The maximum profit is " << profit << endl ; 
    
    

}

int main(){

    vector<int> v1 = {7,1,5,3,6,4};
    beststock(v1); 
    return 0 ; 
}