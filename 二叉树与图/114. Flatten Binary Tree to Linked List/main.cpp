#include <iostream>


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void flatten(TreeNode *root) {
        TreeNode *last = nullptr;
        preorder(root,last);

    }

private:
    void preorder(TreeNode *node,TreeNode* &last){
        if (!node){
            return;
        }
        if (!node->left && !node->right){
            last = node;
            return;
        }
        TreeNode *left = node->left;
        TreeNode *right = node->right;
        TreeNode *left_last = nullptr;
        TreeNode *right_last = nullptr;
        if(left){
            preorder(left,left_last);
            node->left = nullptr;
            node->right=left;
            last = left_last;
        }
        if(right){
            preorder(right,right_last);
            if(left_last){
                left_last->right = right;
            }
            last = right_last;
        }


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}