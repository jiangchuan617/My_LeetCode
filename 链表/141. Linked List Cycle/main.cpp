#include <iostream>
using namespace std;

//快慢指针

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *meet = nullptr;  // 相遇的节点
        while(fast)
        {
            slow = slow->next;
            fast = fast->next;
            if(!fast)
                break;
            fast =fast->next;
            if(fast == slow)
            {
                meet = fast;
                break;
            }
        }
        if(meet==nullptr)
            return false;
        else
            return true;
//        while(head && meet)
//        {
//            if(head == meet)
//                return head;
//            head = head->next;
//            meet = meet->next;
//        }


    }
};

int main() {
    ListNode a(3);
    ListNode b(2);
    ListNode c(0);
    ListNode d(-4);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &c;



    Solution s;
    cout<<s.hasCycle(&a)<<endl;


    return 0;
}