#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *invertTree(TreeNode *root) {
        //递归的反转
        if( root == nullptr){
            return nullptr;
        }
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->left);
        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}