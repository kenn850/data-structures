#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::pow(int x, int n, int d) ;
};

// Program Code
int M;
long long mod(long long x){
    return (((x%M)+M)%M);
}
 
long long mul(long long a, long long b){
    return mod(mod(a)*mod(b));
}

int Solution::pow(int x, int n, int d) {
    M =d;
    if(n == 0 && x == 0) return 0;
    if(n==0) return 1LL;
    if(n==1) return mod(x);
    long long res=1;
    while(n){
        if(n%2==1)
            res=mul(res,x);
        x=mul(x,x);
        n/=2;
    }
    return res;
}
