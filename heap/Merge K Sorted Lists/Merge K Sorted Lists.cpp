#include<iostream>
#include<vector>
#include <algorithm>
#include <queue>
using namespace std;

// Class Definition 

class Solution{
    public:
	ListNode* Solution::mergeKLists(vector<ListNode*> &A) ;
};

// Program Code

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };

struct comp{
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
};

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {

    ListNode* ans = NULL;

    ListNode* temp;

    priority_queue<ListNode*,vector<ListNode*>,comp> minh;

    for(int i = 0; i < A.size(); i++){
        minh.push(A[i]);
    }

    while(!minh.empty()){
        ListNode* p = minh.top();
        minh.pop();
        if(ans == NULL){
            ans = p;
            temp = p;
        }
        else{
            temp -> next = p;
            temp = temp -> next;
        }
        if(p->next) minh.push(p -> next);
    }

    return ans;
}
