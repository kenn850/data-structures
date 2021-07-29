#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Class Definition

class Solution
{
public:
    vector<int> plusOne(vector<int> &A);
};

// Program Code

vector<int> Solution::plusOne(vector<int> &A) {
    if(A.size() == 1 && A[0]<9) {
        A[0] += 1;
        return A;
    }
    while(A[0] == 0){
        A.erase(A.begin());
    }
    int n = A.size();
    for(int i = n-1; i>=0; i--){
        if(i == 0 && A[i] == 9) {
            A[0] = 0;
            A.insert(A.begin(),1);
            break;
        }
        if(A[i]<9){
            A[i]++;
            break;
        }
        else if(A[i] == 9){
            A[i] = 0;
        }
    }
    return A;
}
