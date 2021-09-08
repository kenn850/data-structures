#include <bits/stdc++.h>
using namespace std;

// Class Definition 

class Solution{
    public:
    int Solution::climbStairs(int A);
};

// Program Code
int Solution::climbStairs(int A) {
    int dp[A+1];

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i < A+1; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[A];

}
