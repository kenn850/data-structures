#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
int Solution::isPalindrome(int A) ;
};

// Program Code
int Solution::isPalindrome(int A) {
    vector<int> ans;
    if (A<0) return 0;
    int n = A, dig =0;
    
    while(n>0){
        ans.push_back(n%10);
        ++dig;
        n /=10;
    } 

    if (dig%2 != 0) {ans.erase(ans.begin()+(dig/2));dig--;}

    for(int i = 0, j = dig -1; i < dig/2, j >= dig/2; i++, j--){
        if(ans[i] != ans[j]){
            return 0;
        }
    }
    return 1;
}
