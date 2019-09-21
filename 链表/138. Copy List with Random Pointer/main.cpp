#include <iostream>
#include <map>
#include <vector>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node *,int> node_map;
        vector<Node *> node_vec;
        Node *ptr = head;
        int i = 0;
        while(ptr)
        {
            node_vec.push_back(new Node(ptr.label))
        }

    }
};


int main() {

    return 0;
}