#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Class Definition

class Solution
{
public:
    vector<vector<int> > solve(vector<int> &A, vector<int> &B);
};

// Program Code


vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    int n = A.size(), m = B.size();
    vector<vector<int> > ans;
    for(int i = 0; i< m; i++){
        int j = 0;
        int k = B[i];
        vector<int> temp;
        while(j<n){
            if(k >= n) k %= n;
            temp.push_back(A[k]);
            k++;
            j++;
        }
        ans.push_back(temp);
    }
    return ans;
}
