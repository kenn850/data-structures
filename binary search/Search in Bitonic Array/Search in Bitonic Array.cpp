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
int ascendingSearch(vector<int> &A, int B, int start, int end){
    int mid = (start + end)/2;
    while(start <= end){
        mid = (start + end)/2;
        if(A[mid] == B) return mid;
        else if(A[mid] < B) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int descendingSearch(vector<int> &A, int B, int start, int end){
    int mid = (start + end)/2;
    while(start <= end){
        mid = (start + end)/2;
        if(A[mid] == B) return mid;
        else if(A[mid] > B) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int Solution::solve(vector<int> &A, int B) {
    int start = 0, n = A.size(), end = n-1;
    int mid =0;
    while(start <= end){
        mid = (start + end)/2;
        if(A[mid] > A[mid+1] && A[mid] > A[mid -1]) break;
        else if(A[mid] < A[mid+1] && A[mid] > A[mid -1]) start = mid - 1;
        else end = mid + 1;
    }
    int left = -1, right = -1;
    if(A[mid] == B) return mid;
    else {
        left = descendingSearch(A,B,0,mid-1);
        right = ascendingSearch(A,B,mid+1,n-1);
    }
    if(left == -1 && right == -1 ) return -1;
    return left != -1 ?  left:right;

}
