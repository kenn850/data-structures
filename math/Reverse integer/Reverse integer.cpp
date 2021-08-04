#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
int Solution::reverse(int A) ;
};

// Program Code
int Solution::reverse(int A) {
    int sign;
    if(A < 0 ) sign = 1;
    else sign = 0;
    string num = to_string(abs(A));
    int i = 0, j = num.size()-1;
    while(i< j){
        swap(num[i],num[j]);
        i++;
        j--;
    }
    if(stof(num) > INT_MAX or stof(num) < INT_MIN) return 0;
    int number = stoi(num);
    if(sign) return -1*number;
    else return number;
}
