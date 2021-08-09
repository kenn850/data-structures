#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	vector<int> Solution::getRow(int A) ;
};

// Program Code
vector<int> Solution::getRow(int A) {
    vector<int> ans(A+1);
    if(A==0){
        ans[0]=1;
        return ans;
    }
    int c=1;
    ans[0]=c;
    for(int i=1;i<=A;i++){
        ans[i]=c*(A-i+1)/i;
        c=ans[i];
    }
    return ans;

}