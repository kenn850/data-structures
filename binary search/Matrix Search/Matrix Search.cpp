#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::searchMatrix(vector<vector<int> > &A, int B) ;
};

// Program Code


int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int start = 0, end = A.size()-1,mid;

    while(start <= end){
        mid = (start + end)/2;
        if(A[mid][0]== B || A[mid][A[mid].size()-1] == B) return 1;
        if(A[mid][0] < B && A[mid][A[mid].size()-1] > B) break;
        else if(A[mid][0] < B) start = mid + 1;
        else end = mid - 1;
    }

    int i = mid;
    start = 0;
    end = A[i].size()-1;

    while(start <= end){
        mid = (start + end)/2;
        if(A[i][mid] == B) return 1;
        else if(A[i][mid] > B) end = mid -1;
        else start = mid + 1;
    }
    return 0;
}
