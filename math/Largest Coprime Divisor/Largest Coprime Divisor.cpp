#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::cpFact(int A, int B) ;
};

// Program Code
int Solution::cpFact(int A, int B) {
    int temp = __gcd(A, B);
    while (temp != 1) {
        A = A / temp;
        temp = __gcd(A, B);
    }
    return A;
}
