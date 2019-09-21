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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        vector<TreeNode*> path;
        vector<TreeNode*> node_p_path;
        vector<TreeNode*> node_q_path;
        int finish =0;
        preorder(root,p,path,node_p_path,finish);
        path.clear();
        finish=0;
        preorder(root,q,path,node_q_path,finish);
        int path_len = 0;
        if(node_p_path.size()<node_q_path.size()){
            path_len= node_p_path.size();
        }
        else{
            path_len = node_q_path.size();
        }
        TreeNode *result = nullptr;
        for(int i=0;i<path_len;i++){
            if (node_p_path[i]==node_q_path[i]){
                result = node_p_path[i];
            }
        }
        return result;

    }

private:
    void preorder(TreeNode *node, TreeNode *search,
                  vector<TreeNode *> &path,  // 遍历时的节点路径栈
                  vector<TreeNode *> &result,  // 最终搜索到的节点search的路径结果
                  int &finish) {  // 记录是否找到节点search的变量，未找到是0,找到为1
        // 如果遍历至空节点（叶子节点的孩子）结束
        if (!node || finish==1) {
            return;
        }
        path.push_back(node);
        if (node == search) {
            // 找到代搜索节点
            finish=1;
            result = path; // 将当前path 存储到result中

        }
        preorder(node->left,search,path,result,finish);
        preorder(node->right,search,path,result,finish);
        path.pop_back();  // 遍历节点node后，把node节点弹出path


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}