/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        dfs(root,res);
        return res;
    }

    int dfs(TreeNode* root, int& r){
        if(root == nullptr) return 0;
        int left = dfs(root->left, r);
        int right = dfs(root->right, r);
        r = max(r, left+right);
        return 1 + max(left,right);
    }
};
