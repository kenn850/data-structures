#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int solve(vector<int> &A );
};

// Program Code

int Solution::solve(vector<int> &A) {
    int odd = 0, even = 0;
    for(int i = 0; i<A.size(); i++){
        if(i%2==0) even += A[i];
        else odd += A[i];
    }
    int count = 0;
    for(int i =0;i<A.size();i+=1){
        if(i%2 == 0){
            even -= A[i];
            if(even==odd) count++;
            odd+= A[i];
        }
        else{
            odd -= A[i];
            if(odd==even) count++;
            even+= A[i];
        }
    }
    return count;
}
