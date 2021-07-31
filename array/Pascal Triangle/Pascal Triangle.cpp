#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    vector<vector<int> > Solution::solve(int A);
};

// Program Code

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > ans ;
    vector<int> temp;
    for(int i = 0; i < A; i++){
        vector<int> temp;
        for(int j = 0; j <= i; j++){
            if(i == j || i == 0){
                temp.push_back(1);
            }
            else{
                temp.push_back(ans[i-1][j-1] + ans[i -1][j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
