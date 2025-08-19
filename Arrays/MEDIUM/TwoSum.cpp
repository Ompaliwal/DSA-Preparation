// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ; 

// bool twosum(vector<int>& vec1 , int target){

//     for (int i = 0; i < vec1.size(); i++)
//     {
//         for (int j = i+1; j < vec1.size(); j++)
//         {
//             if(vec1[i]+vec1[j]==target){
//                 return true ; 

//             }
//         }
        
//     }

//     return false;
    

// }

// int main (){


//     vector<int> vec1 = {1,2,4,5,6}; 
//     int target = 20; 
     
//     bool result = twosum(vec1 , target);
//     cout << "The result is " << result ; 
//         return 0 ; 
// }


#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}