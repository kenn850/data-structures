#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int solve(vector<int> &A );
};

// Program Code

int Solution::solve(vector<int> &A) {
    int count = 1;
    for(int i = 0; i<A.size() ; i++){
        count *=2;
        count %= 1000000007;
    }
    return count-1;

}