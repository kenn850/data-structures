#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::solve(vector<int> &A, int B) ;
};

// Program Code
int Solution::solve(vector<int> &A, int B) {
    int start = 0, n = A.size(), end = n -1, mid, pos=-1;
    if(A[n-1] < B) return n;
    if(A[0] > B) return 0;
    while(start <= end){
        mid = (start + end)/2;
        if(A[mid] <= B){
            pos = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return pos+1;
}
