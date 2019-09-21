#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode *root, int sum) {
        vector<vector<int>> result;
        vector<int> path;
        int path_val = 0;
        preorder(root, path_val, sum, result, path);
        return result;


    }

private:
    void preorder(TreeNode *node, int &path_val, int sum,
                  vector<vector<int>> &result,
                  vector<int> path) {
        if (!node) {
            cout << node << endl;
            return;
        }
        // 先序遍历
        path_val += node->val;
        path.push_back(node->val);
        if (!node->left && !node->right && path_val == sum) {
            result.push_back(path);
        }
        // 递归
        preorder(node->left, path_val, sum, result, path);
        preorder(node->right, path_val, sum, result, path);
        path_val -= node->val;
        path.pop_back();


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}