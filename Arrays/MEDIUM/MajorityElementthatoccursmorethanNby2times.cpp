///Moore voting algoithm 

#include<bits/stdc++.h>

using namespace std ; 

int majorityelement(vector<int> & v1 )
{
int element= v1[0] ; 
int count=0 ; 
int counting= 0 ; 

for (int i = 0; i < v1.size() ; i++)
{
    if(count==0){
        element = v1[i]; 
        count++ ;
    }
    else if(v1[i]==element) count++; 
    else count-- ; 

}

for (int i = 0; i < v1.size(); i++)
{
    if (v1[i] == element)
    {
        counting++ ; 
    }
    
}

if(counting > (v1.size())/2)
{
    return element ; 
}

return -1 ; 
}

int main (){
    vector<int> v1 = {2, 3, 3, 3, 3, 3 , 2, 0};
    int majority = majorityelement(v1); 
    cout << "The majority element is " << majority; 
    return 0 ; 
}