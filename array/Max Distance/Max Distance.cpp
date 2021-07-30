
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int maximumGap(const vector<int> &A );
};

// Program Code

int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    vector<int> maxFromEnd(n + 1, INT_MIN);
    for (int i = A.size() - 1; i >= 0; i--) {
        maxFromEnd[i] = max(maxFromEnd[i + 1], A[i]);
    }
    int result = 0;
     int i = 0 , j = 0 , ans = 0;
    while(i < n){
        while(j < n && maxFromEnd[j] >= A[i]){
            result = max(result , j - i);
            j++;
        }
        i++;
    }
    return result;
}
