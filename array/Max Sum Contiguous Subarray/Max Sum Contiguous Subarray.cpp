#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int maxSubArray(const vector<int> &A );
};

// Program Code


int Solution::maxSubArray(const vector<int> &A) {
    int max_Here = 0, ans =INT_MIN;
    for(int i =0; i< A.size();i++){
        max_Here += A[i];
        ans = max(ans,max_Here);
        if(max_Here<0) max_Here = 0;
    }
    return ans;
}