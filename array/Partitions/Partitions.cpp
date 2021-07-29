#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int solve(int A, vector<int> &B );
};

// Program Code

int Solution::solve(int A, vector<int> &B) {
    int sum = 0, n = A;
    for(int i = 0 ; i< n ; i++){
        sum += B[i];
    }
    if(sum%3 != 0) return 0;

    sum/= 3;

    int count[A] = {0}, sumHere = 0;

    for(int i = n-1 ; i>=  0 ; i--){
        sumHere += B[i];
        if(sumHere == sum) count[i] = 1;
    }
    for(int i = n-2 ;i >=  0 ; i--){
        count[i] += count[i+1];
    }
    int ans = 0;
    sumHere = 0;
    for (int i = 0 ; i+2 < n ; i++)
    {
        sumHere += B[i];
        if (sumHere == sum)
            ans += count[i + 2];
    }
    return ans;   
}
