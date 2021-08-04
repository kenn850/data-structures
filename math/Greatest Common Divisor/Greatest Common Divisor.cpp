#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int Solution::gcd(int A, int B) ;
};

// Program Code
int Solution::gcd(int A, int B) {
    int s = A < B ? A:B;
    int l = A > B ? A:B;
    
    if(s == 0) return l;
    if(l%s == 0) return s;
    
    s = s/2;
    while(s > 1){
        if(A%s == 0 && B%s == 0) return s;
        s--;
    }
    return 1;
}
