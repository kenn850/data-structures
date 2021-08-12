#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::books(vector<int> &A, int B) ;
};

// Program Code
int isPossible(vector<int> &A, int B, int mid, int n){
    int num = 1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > mid) return 0;
        if(sum + A[i] > mid) {
            num++;
            sum = A[i];
            if(num > B) return 0;
        }
        else sum += A[i];
    }
    return 1;

}

int Solution::books(vector<int> &A, int B) {
    if(A.size() < B) return -1;
    int start = 0,sum = 0, n = A.size();
    for(int i = 0 ; i < n; i++){
        sum +=A[i];
        start = max(start,A[i]); 
    }

    int  end = sum, ans = 0;
    while(start<=end){
        int mid = (start + end)/2;
        if(isPossible(A,B,mid,n)){
            ans = mid;
            end = mid -1;
        }
        else start = mid + 1;

    }
    return ans;
}
