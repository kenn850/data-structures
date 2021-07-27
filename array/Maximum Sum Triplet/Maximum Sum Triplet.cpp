#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int solve(vector<int> &A );
};

// Program Code

int Solution::solve(vector<int> &A) {
    int n=A.size(),el=A[n-1],ans=0;
    vector<int>right(n);
    set<int>s;
    s.insert(A[0]);
    for(int i=n-1;i>=0;i--)
    {
        right[i]=el;
        el=max(A[i],el);
    }
    for(int i=1;i<n-1;i++)
    {
        if(right[i]<=A[i])
        {
            continue;
        }
        s.insert(A[i]);
        auto it=s.find(A[i]);
        if(it==s.begin())
        {
            continue;
        }
        it--;
        ans=max(ans,*it+A[i]+right[i]);
    }
    return ans;
}
