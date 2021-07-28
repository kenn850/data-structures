#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Class Definition

class Solution
{
public:
    int solve(vector<int> &A, int B);
};

// Program Code

int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    if (B >= n)
        return 1;
    int i = 0;
    int a = 0;
    int count = 0;
    while (i < n)
    {
        int flag = 0;
        for (int x = i + B - 1; x >= a; x--)
        {
            if (A[x] == 1)
            {
                a = x + 1;
                flag = 1;
                count++;
                i = x + B;
                break;
            }
        }
        if (i >= n)
            return count;
        if (flag == 0)
            return -1;
    }
    return count;
}
