#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	vector<int> Solution::searchRange(const vector<int> &A, int B) ;
};

// Program Code
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int start = 0, end = A.size()-1, mid;
    vector<int> ans;
    ans.push_back(-1);
    ans.push_back(-1);

    // Complexity > log n (old code)

    // while(start <= end){
    //     mid = (start + end)/2; 
    //     if(A[mid] == B){
    //         int i = mid, j = mid;
    //         while(i<A.size() && A[i] == B) i++;
    //         while(j>=0 && A[j] == B) j--;
    //         ans[0] = j+1;
    //         ans[1] = i-1;
    //         return ans;
    //     }
    //     else if(B < A[mid]) end = mid - 1;
    //     else start = mid + 1;
    // }
    
    // Old code ends

    while(start < end){
        mid = (start + end)/2;
        if(A[mid] < B) start = mid + 1;
        else end = mid;
    }
    if(A[start] != B) return ans; 
    ans[0] = start;
    end = A.size() -1;
    while(start < end){
        mid = (start + end)/2 + 1 ;
        if(A[mid] > B) end = mid - 1;
        else start = mid;
    }
    ans[1] = end;
    return ans;
    
}
