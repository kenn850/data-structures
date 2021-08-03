#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
using namespace std;

// Class Definition 

class Solution{
    public:
        int Solution::titleToNumber(string A);
};

// Program Code

int Solution::titleToNumber(string A) {
    int n = A.size();
    int a;
    for(int i = 0; i <  n; i++){
        a += pow(26, i)*(A[n-(i+1)] - 'A' + 1);
    }
    
    return a;
}
