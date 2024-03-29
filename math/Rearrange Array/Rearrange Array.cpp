#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    void Solution::arrange(vector<int> &A) ;
};

// Program Code

void Solution::arrange(vector<int> &A) {
    int n = A.size();
    for(int i = 0; i < n; i ++){
        A[i] += (A[A[i]]%n)*n;    
    }
    for(int i = 0; i < n; i ++){
        A[i] /= n;
    }
}
