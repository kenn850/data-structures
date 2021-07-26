#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int repeatedNumber(const vector<int> &A );
};

// Program Code



int Solution::repeatedNumber(const vector<int> &A) {
    int a = A[0];
    int b = A[A[0]];
    while (a != b) {
        a = A[a];
        b = A[A[b]];
    }

    b = 0;
    while (a != b) {
        a = A[a];
        b = A[b];
    }
    if(a==0) return -1;
    return a;
}
