#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    string Solution::solve(string A) ;
};

// Program Code

string Solution::solve(string A) {
    if(next_permutation(A.begin(),A.end())) return A;
    return "-1";
}
