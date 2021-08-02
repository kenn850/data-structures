#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
using namespace std;

// Class Definition 

class Solution{
    public:
    int Solution::hammingDistance(const vector<int> &A);
};

// Program Code


int Solution::hammingDistance(const vector<int> &A) {
long ans = 0, n=A.size();
    for (int i = 0; i < 32; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if ( (A[j] & (1 << i)) )
                count++;
        ans += count * (n - count) * 2; 
    }
    return ans % 1000000007;
}
