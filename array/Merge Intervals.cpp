// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

// You may assume that the intervals were initially sorted according to their start times.

// Example 1:

// Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

// Example 2:

// Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].

// This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

// Make sure the returned intervals are also sorted.

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