#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int Solution::solve(int A, int B);
};

// Program Code


int Solution::solve(int A, int B) {
    int topLeft = min(A, B) - 1;
    int bottomRight = 8 - max(A, B);
    int topRight = min(A, 9 - B) - 1;
    int bottomLeft = 8 - max(A, 9 - B);
    return (topLeft + topRight + bottomRight + bottomLeft);
}
