#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
    vector<Interval> insert(vector<Interval> &A, Interval B );
};

// Program Code



struct Interval
{
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

bool cmp(Interval a, Interval b)
{
    return a.start <= b.start;
}
vector<Interval> Solution::insert(vector<Interval> &A, Interval B)
{
    A.push_back(B);
    sort(A.begin(), A.end(), cmp);
    int j = 0, i = 0, k;
    for (i = 0; i < A.size(); i++)
    {
        int mn = A[i].start;
        int mx = A[i].end;
        k = i + 1;
        for (; k < A.size(); k++)
        {
            if (A[k].start <= mx)
            {
                mx = max(mx, A[k].end);
                mn = min(A[i].start, mn);
            }
            else
            {
                k--;
                break;
            }
        }

        i = k;

        A[j].start = mn;
        A[j].end = mx;
        j++;
    }

    A.erase(A.begin() + j, A.end());
    return A;
}