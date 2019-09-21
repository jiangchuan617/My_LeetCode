#include <iostream>
#include <vector>
using namespace std;
//分治算法

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int num = lists.size();
        if(num==0)
            return nullptr;
        else if(num==1)
            return lists[0];
        else if(num==2)
            return mergeTwoLists(lists[0],lists[1]);
        else
        {
            int mid = num/2;
            vector<ListNode*>sub_lists1;
            vector<ListNode*>sub_lists2;
            for(int i=0;i<mid;i++)
                sub_lists1.push_back(lists[i]);
            for(int i=mid;i<num;i++)
                sub_lists2.push_back(lists[i]);
            ListNode *l1 = mergeKLists(sub_lists1);
            ListNode *l2 = mergeKLists(sub_lists2);
            return mergeTwoLists(l1,l2);
        }
    }
};
int main() {
    vector<ListNode*> lists;
//    Input:
//    [
//    1->4->5,
//    1->3->4,
//    2->6
//    ]
    ListNode a1(1);
    ListNode b1(4);
    ListNode c1(5);
    a1.next = &b1;
    b1.next = &c1;

    ListNode a2(1);
    ListNode b2(3);
    ListNode c2(4);
    a2.next = &b2;
    b2.next = &c2;

    ListNode a3(2);
    ListNode b3(6);
    a3.next = &b3;

    lists.push_back(&a1);
    lists.push_back(&a2);
    lists.push_back(&a3);

    Solution s;
    ListNode *head = s.mergeKLists(lists);
    while(head)
    {
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<endl;




    return 0;
}