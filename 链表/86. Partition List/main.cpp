#include <iostream>
using namespace std;
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };


class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode less_head{0};
        ListNode more_head{0};
        ListNode *less_ptr = &less_head;
        ListNode *more_ptr = &more_head;
        while(head)
        {
            if(head->val<x)
            {
                less_ptr->next = head;
                less_ptr = less_ptr->next;
            }
            else
            {
                more_ptr->next = head;
                more_ptr = more_ptr->next;
            }
            head = head->next;
        }
//        将less_head链表与more_head链表连接起来
        less_ptr->next = more_head.next;
        more_ptr->next = nullptr;
        return less_head.next;

    }
};
int main() {
    ListNode a(1);
    ListNode b(4);
    ListNode c(3);
    ListNode d(2);
    ListNode e(5);
    ListNode f(2);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    Solution s;
    ListNode *head = s.partition(&a,3);
    while(head)
    {
        cout<<head->val<<"->";
        head = head->next;
    }



    return 0;
}