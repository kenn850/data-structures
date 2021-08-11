#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::searchInsert(vector<int> &A, int B) ;
};

// Program Code
int Solution::searchInsert(vector<int> &A, int B) {
    int start = 0, end = A.size()-1, mid;
    if(A[0] > B) return 0;
    if(A[A.size()-1] < B) return A.size();
    while(start <= end){
        mid = (start+end)/2;
        if(A[mid] == B) return mid;
        else if (B < A[mid] ) end = mid -1;
        else start = mid + 1;
    }
    return end + 1;
}
