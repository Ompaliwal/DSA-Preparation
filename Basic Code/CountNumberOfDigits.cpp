// Count all Digits of a Number
// You are given an integer n. You need to return the number of digits in the number.
// The number will have no leading zeroes, except when the number is 0 itself.

#include<iostream>
using namespace std; 

class Solution {
public:
    int countDigit(int n) {
        int i = 10;
        int count = 0; 
        while(n>=0){

            n = n/i ; 
            count++ ; 
            
            
        }

        return count ; 
    }
};

int main (){
    Solution S1 ; 
    S1.countDigit(4); 
    return 0 ; 
}