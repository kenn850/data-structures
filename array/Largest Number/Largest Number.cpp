#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    string largestNumber(const vector<int> &A );
};

// Program Code

bool cmp(string X,string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);

    return  XY.compare(YX) > 0 ? 1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> B;
    int sum = 0;
    for(int i = 0; i< A.size();i++){
        B.push_back(std::to_string(A[i]));
        sum += A[i];
    }
    if(sum == 0) return to_string(0);
    sort(B.begin(),B.end(),cmp);
    std::string s;
    for (const auto &piece : B) s += piece;
    return s;

}
