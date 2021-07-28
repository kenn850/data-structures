#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    vector<int> solve(vector<int> &A );
};

// Program Code
vector<int> Solution::solve(vector<int> &A) {
    vector<int> ans;
    int n = A.size(), max;
    ans.push_back(A[n-1]);
    max = A[n-1];
    for(int i = n-2; i >=0;i--){
        if(A[i] > max){
            max = A[i];
            ans.push_back(A[i]);
        }
    }
    return ;
}
