// Problem Statement: Given an integer N return the reverse of the given number.
// Note: If a number has trailing zeros, then its reverse will not include them.
//  For e.g., reverse of 10400 will be 401 instead of 00401.

#include<iostream>
using namespace std ; 

class Solution {
public:
    int reverse(int x) {
        int num= 0 ; 
        int reverseNumber = 0 ; 
        while(x>=1){
            num = x%10 ; 
            x=x/10 - num/10;
            reverseNumber = reverseNumber*10 + num;


        }
        cout << reverseNumber ;
        return reverseNumber ;  
    }
};

int main(){

    Solution S1 ; 
    S1.reverse(77896); 
    return 0 ; 
}
