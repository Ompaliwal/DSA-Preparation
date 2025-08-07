#include<bits/stdc++.h>
using namespace std; 


void explainPair()
{  //NORMAL PAIR 
    pair<int , int> p = {1 , 3};
    cout << p.first<< endl ;

    // NESTED PAIR
    pair<int , pair<int , int>> p1 = {10, {30, 40}};
    cout << p1.second.second << endl ; 

    // ARRAY OF PAIR
    pair<int , int> arr[] = {{1,2} , {2,5} , {5,1}}; 
    cout<< arr[0].first; 
    //0-> elment ka index and first can be-> {first , second}
}

void explainVector(){

    vector<int> v ; 
    
    v.push_back(1);
    // {} -> {1}

    v.emplace_back(2)
    //{1} -> {1 , 2} emplace back is faster than push back 

    vector<pair<int , int>>vec;
    
    
    






}
int main(){

    explainPair();  

    return 0; 
}