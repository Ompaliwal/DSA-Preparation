// Problem Statement: Given an integer N, return true if it is a palindrome else return false.
// A palindrome is a number that reads the same backward as forward. 
// For example, 121, 1331, and 4554 are palindromes because they remain
//  the same when their digits are reversed.


#include<iostream>
using namespace std ; 

class Solution {
public:
    bool isPalindrome(int n) {
        if( n < 0 ) 
        {
            cout << "Number is negative" ; 
            return 0 ;
        
        }

        else{
            int reverseNumber = 0 ; 
            int orignal = n ; 
            int digit = 0 ; 
            while(orignal>0){
                digit = orignal % 10 ; 
                reverseNumber = reverseNumber*10 + digit; 
                orignal = orignal/10;
            }

            return n == reverseNumber; 
 
        }
    }
};

int main(){
    Solution S1; 
    cout << boolalpha << S1.isPalindrome(112211) << endl; 
    return 0 ; 
}