#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::paint(int A, int B, vector<int> &C) ;
};

// Program Code

int isPossible(vector<int> &C, int B , int A, long long int mid){
    int n=C.size();
    long long int t= mid;
    int i=0,cnt=1;
    while(i<n){
        if(cnt>A)
            return false;
        if(C[i]>t){
            cnt++;
            t=mid;
        }
        else{
            t=t-C[i];
            i++;
        }
    }
    return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    long long int start = 0, end, mid, sum, n =C.size();

    for(int i =0; i < n; i++){
        sum = sum%10000003 + C[i]%10000003;
    }
    end = sum*B;
    long long int ans = end%10000003;
    while(start <= end){
        mid = (start + end)/2;
        if(isPossible(C,B,A,mid/B)){
            ans = mid%10000003;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
        
    }

    return ans%10000003;
    
}
