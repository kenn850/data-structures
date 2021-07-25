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
    sort(A.begin(),A.end());
    bool flag = 0;
    for(int i = 0; i < A.size(); i++){
        if(i!=A.size() -1 && A[i+1] == A[i]) continue;
        if(A[i] == A.size()-i-1){
            flag = 1;
            break;
        }
    }
    if(flag) return 1;
    else return -1;
}
