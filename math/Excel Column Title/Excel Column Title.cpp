#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    string Solution::convertToTitle(int A);
};

// Program Code
string Solution::convertToTitle(int A) {
    int n = A;
    int r;
    string s;
    while (n > 0){
        r = n%26;
        if(r == 0){
            s.push_back('Z');
            n = (n/26)-1; 
        }
        else{
            s.push_back((r -1 ) + 'A');
            n /= 26;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
