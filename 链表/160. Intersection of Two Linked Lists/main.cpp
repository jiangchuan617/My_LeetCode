#include <iostream>
#include <set>
using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    int get_list_len(ListNode *list)
    {   // 计算链表的长度
        int len = 0;
        while(list)
        {
            list = list->next;
            len++;
        }
        return len;
    }
    ListNode* forward_long_list(int long_len,int short_len,ListNode* long_head)
    {   // 将长链表的表头移到和短链表同样长度的位置
        int delta = long_len-short_len;
        while(long_head && delta)
        {
            long_head = long_head->next;
            delta--;
        }
        return long_head;

    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int A_len = get_list_len(headA);
        int B_len = get_list_len(headB);
        if (A_len>B_len)
            headA = forward_long_list(A_len,B_len,headA);
        else
            headB = forward_long_list(B_len,A_len,headB);
        while(headA && headB)
        {
            if(headA== headB)
                return headA;

            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;

    }
};


int main() {
//    A链表
    ListNode a1(4);
    ListNode a2(1);
    ListNode c1(8);
    ListNode c2(4);
    ListNode c3(5);
    a1.next = &a2;
    a2.next = &c1;
    c1.next = &c2;
    c2.next = &c3;
//    B链表
    ListNode b1(5);
    ListNode b2(0);
    ListNode b3(1);

    b1.next = &b2;
    b2.next = &b3;
    b3.next = &c1;

    Solution s;
    ListNode *headA = &a1;
    ListNode *headB = &b1;
    ListNode* res = s.getIntersectionNode(headA,headB);
    while(res)
    {
        cout<<res->val<<"->";
        res = res->next;
    }
    cout<<endl;




    return 0;
}