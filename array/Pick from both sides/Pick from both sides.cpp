#include<iostream>
#include<vector>

using namespace std;

// Class Definition 

class Solution{
    public:
    int solve(vector<int> &A , int B);
};

// Program Code
int Solution::solve(vector<int> &A, int B) {

    int s = A.size();
    int max_Here = 0;
    for(int i = 0; i<B;i++){
        max_Here += A[i]; 
    }
    int ans = max_Here;
    int j = B-1;
    for(int i = s-1; i>s-B-1;i--){
        if(max_Here - A[j] + A[i] > ans) ans = max_Here - A[j] + A[i];
        max_Here = max_Here - A[j] + A[i];
        j--;
    }
    return ans;
}
