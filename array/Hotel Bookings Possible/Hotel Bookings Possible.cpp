#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    bool hotel( vector<int> &A , vector<int> &B,int K );
};

// Program Code

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n = arrive.size();
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    for(int i = 0 ; i < n; i++){
        if(i+K < n && arrive[i+K] < depart[i]) return 0;
    }
    return 1;
}
