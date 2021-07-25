#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int perfectPeak(vector<int> &A );
};

// Program Code


int Solution::perfectPeak(vector<int> &A) {
    int leftBig =  A[0];
    bool flag = 0;
    for(int i = 1; i< A.size()-1; i++){
        if(A[i] > leftBig){
            leftBig = A[i];
            if(A[i] < *min_element(A.begin()+i+1,A.end())){
                flag = 1;
                break;
            }
        }
    }
    if(flag){
        return 1;
    }
    else
        return 0;

}
