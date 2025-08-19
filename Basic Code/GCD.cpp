// Problem Statement: Given two integers N1 and N2,
// find their greatest common divisor.
// The Greatest Common Divisor of any two integers
// is the largest number that divides both integers.

#include<iostream> 
using namespace std ; 

int GCD(int n1 , int n2){
    int gcd = 0 ;
    int greater = (n1 > n2) ? n1 : n2;
    for (int i = 1; i <= greater/2; i++)
    {
        if(n1%i==0 && n2%i==0){
            gcd = i;  
        }
    }

    return gcd;
    

}


int main(){
    int greater = GCD(50,100); 
    cout<< greater ;
    return 0 ; 
}