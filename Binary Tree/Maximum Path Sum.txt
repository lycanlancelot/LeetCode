/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>res;
    void dfs(TreeNode *node)
    {
        if(node==NULL)
        return;
        dfs(node->left);
        int ans=node->val;
        res.push_back(ans);
        dfs(node->right);
    }
    vector<int> inorderTraversal(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        res.clear();
        dfs(root);
        return res;
        
    }
};