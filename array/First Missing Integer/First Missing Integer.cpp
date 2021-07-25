#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int firstMissingPositive(vector<int> &A );
};

// Program Code

int Solution::firstMissingPositive(vector<int> &A) {
    int min  = *min_element(A.begin(), A.end());
    if(min < 1 || min > 1)return 1;
    if(A.size() == 1){
        if(A[0] == 1) return 2;
        return A[0]-1;
    }
    sort(A.begin(),A.end());
    vector<int>::iterator it;
    it = upper_bound(A.begin(),A.end(),0);
    int k=1;
    for(int i = it - A.begin()-1; i< A.size(); i++){
        if(A[i]!=k) break;
        if(i != A.size()-1) if(A[i+1] !=k) k++;
    }
    return k;
}