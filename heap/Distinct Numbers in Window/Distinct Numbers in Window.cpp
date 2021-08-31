#include <bits/stdc++.h>
using namespace std;

// Class Definition 

class Solution{
    public:
	vector<int> Solution::dNums(vector<int> &A, int B) ;
};

// Program Code
vector<int> Solution::dNums(vector<int> &A, int B) {
    unordered_map<int,int> m;
    int count = 0;
    for(int i = 0; i < B; i++){
        if(m[A[i]] == 0) count++;
        m[A[i]]++;
    }
    int i = B;
    vector<int> ans;
    ans.push_back(m.size());
    for(; i < A.size(); i++){
        
        if(m[A[i - B]] == 1) count--;
        m[A[i-B]]--;
        if(m[A[i]] == 0) count++;
        m[A[i]]++;
        ans.push_back(count);
    }
    return ans;
}
