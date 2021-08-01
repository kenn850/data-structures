#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int Solution::solve(int A, int B, int C);
};

// Program Code

int Solution::solve(int A, int B, int C) {
    if(A <= B - C) return C+A -1;
    return (A - B + C -1)%B;
}
