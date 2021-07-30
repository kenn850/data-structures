
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    vector<int> Solution::subUnsort(vector<int> &A);
};

// Program Code

vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int start = 0,end = n-1;
    vector<int> result;
    for(start = 0;start<n-1;start++){
        if(A[start] > A[start+1] )break;
    }
    if(start >= n-1){
        result.push_back(-1);
        return result;
    } 
    for(end = n-1;end>0;end--){
        if(A[end] < A[end - 1])break;
    }
    int maxC = A[start], minC = A[start];
    for(int i = start + 1; i <= end; i++)
    {
        if(A[i] > maxC)
        maxC = A[i];
        if(A[i] < minC)
        minC = A[i];
    }
    for(int i = 0; i< start; i++){
        if(A[i] > minC){
            start = i;
            break;
        }
    }
    for(int i = n - 1; i> end; i--){
        if(A[i] < maxC){
            end = i;
            break;
        }
    }
    result.push_back(start);
    result.push_back(end);
    return result;
}
