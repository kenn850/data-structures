#include<iostream>
#include<vector>
#include <algorithm>
#include <queue>



using namespace std;

	

class Solution{
    public:
    vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) ;
};

// Program Code
vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {

    priority_queue<int,vector<int>, greater<int>> minh;

    vector<int> ans(C);

    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());

    for(int i = 0; i < C; i++){
        for(int j=0; j < C; j++ ){
            if(minh.size() < C) {
                minh.push(A[i] + B[j]);
            }
            else{
                if(minh.top() < A[i] + B[j]){
                    minh.pop();
                    minh.push(A[i] + B[j]);
                }
                else{
                    break;
                }
            }
        }
    }
    int k = C-1;
    while(!minh.empty()){
        ans[k] = minh.top();
        minh.pop();
        k--;
    }

    return ans;

}
