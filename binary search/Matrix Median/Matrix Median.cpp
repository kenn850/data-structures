#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::findMedian(vector<vector<int> > &A) ;
};

// Program Code
int Solution::findMedian(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size(), minV = INT_MAX, maxV = INT_MIN;
    for(int i = 0; i < n; i++){
        minV = min(A[i][0],minV);
        maxV = max(maxV, A[i][m-1]);
    }
    int val = (n*m + 1)/2;
    while(minV < maxV){
        int mid = (minV+maxV)/2;
        int count = 0;
        for(int i = 0; i < n ; i++) {
            count += upper_bound(A[i].begin(),A[i].end(), mid) - A[i].begin() ;
        }
        if( count < val) minV = mid + 1;
        else maxV = mid; 
    }
    return minV;

}
