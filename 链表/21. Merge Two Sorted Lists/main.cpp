#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode temp_head(0);
        ListNode *pre = &temp_head;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                pre->next = l1;
                l1 = l1->next;
            }
            else
            {
                pre->next = l2;
                l2 = l2->next;
            }
            pre = pre->next;
        }
        if(l1)
        {
            pre->next = l1;
        }
        else
        {
            pre->next = l2;
        }


        return temp_head.next;

    }
};


int main() {
    ListNode a(1);
    ListNode b(2);
    ListNode c(4);
    ListNode d(1);
    ListNode e(3);
    ListNode f(4);

    a.next = &b;
    b.next = &c;

    d.next = &e;
    e.next = &f;

    Solution s;
    ListNode *head = s.mergeTwoLists(&a,&d);
    while(head)
    {
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<endl;


    return 0;
}