#include <iostream>
using namespace std;
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
//        计算要逆置节点的个数
        int change_num = n-m+1;
        ListNode *pre_head = nullptr;  // 初始化开始逆置节点的前驱
        ListNode *ans = head;  // 记录转换后的链表头
        while(head && --m)
        {
            pre_head = head;
            head = head->next;
        }
        ListNode *tail = head;
        ListNode *new_head = nullptr;
        while(head && change_num)
        {
            ListNode *next = head->next;
            head->next = new_head;
            new_head = head;
            head = next;
            change_num--;
        }
        tail->next = head;  // 将你逆置段的链表尾部与后一段相连
        if(pre_head)    // 逆置段的表头与前面相连
            pre_head->next = new_head;
        else
            ans = new_head;


        return ans;

    }
};


int main() {
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(4);
    ListNode e(5);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    Solution s;
    ListNode *head = &a;
    while(head)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
    head = s.reverseBetween(&a,2,4);
    while(head)
    {
        cout<<head->val<<" ";
        head = head->next;
    }


    return 0;
}