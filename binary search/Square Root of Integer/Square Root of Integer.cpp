#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::sqrt(int A) ;
};

// Program Code
int Solution::sqrt(int A) {
    if(A == 0 || A == 1) return A;
    int start = 1, end = A, ans;
    while (start <= end){
        int mid = (start+end)/2;
        if(mid*mid == A) return mid;
        if(mid <= A/mid){
            start = mid + 1;
            ans = mid;
        }
        else end = mid - 1;
    }
    return ans;

}
