#include<bits/stdc++.h>

using namespace std  ; 

int kadane (vector<int> & v1)
{
    int currentsum = 0; 
    int maxsum = v1[0]; 

    for (int i = 0; i < v1.size(); i++)
    {
        currentsum = max(v1[i] , v1[i] + currentsum ); 

        maxsum = max(currentsum , maxsum) ; 
    }
    

    return maxsum ; 
}

int main (){
 vector <int> v1 = {-2,1,-3,4,-1,2,1,-5,4}

 kadane(v1) ; 
 return 0 ; 

}