#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    int repeatedNumber(vector<string> &B );
};

// Program Code

float largest(float a, float b, float c){
    float large;
    if ((a >= b) && (a >= c))
        large = a;
    else if ((b >= a) && (b >= c))
        large = b;
    else
        large = c;
    return large;
}

float smallest(float a, float b, float c){
    float large;
    if ((a <= b) && (a <= c))
        large = a;
    else if ((b <= a) && (b <= c))
        large = b;
    else
        large = c;
    return large;
}
int Solution::repeatedNumber(vector<string> &B) {
    int n = B.size();
    if(n < 3) return 0;
    vector<float> A;
    for(int i = 0; i<n; i++){
        A.push_back(std::stof(B[i]));
    }

    float sum = A[0]+A[1]+A[2];
    if(sum > 1 && sum < 2) return 1;
    int flag = 0;
    float temp;
    for(int i = 3;i<n; i++){
        if(sum < 1){
            temp = smallest(A[i-3],A[i-2],A[i-1]);
            if(temp < A[i]){
                sum = sum -temp + A[i];
            }
        }
        else if(sum > 2){
            temp = largest(A[i-3],A[i-2],A[i-1]);
            if(temp > A[i]){
                sum = sum -temp + A[i];
            }
        }
        else{
            flag = 1;
            break;
        }
    }
    if(sum > 1 && sum < 2) return 1;
    return flag;
}
