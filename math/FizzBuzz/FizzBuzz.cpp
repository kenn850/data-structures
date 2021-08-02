#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    vector<string> Solution::fizzBuzz(int A);
};

// Program Code

vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    for(int i = 1; i <= A; i++){
        if((i)%3 == 0 && (i)%5 == 0){
            ans.push_back("FizzBuzz");
        }
        else if((i)%3 == 0){
            ans.push_back("Fizz");
        }
        else if((i)%5 == 0){
            ans.push_back("Buzz");
        }
        else ans.push_back(to_string(i));
    }
    return ans;
}
