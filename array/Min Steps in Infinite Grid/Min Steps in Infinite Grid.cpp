#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int coverPoints( vector<int> &A ,vector<int> &B);
};

// Program Code

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count = 0;
    int x = 0; int y = 0;
    for (int i=0; i < (A.size()-1); ++i) {
        x = abs((A[i+1]-A[i]));
        y = abs((B[i+1]-B[i]));
        count += max(x,y);
    }
    return count;
}
