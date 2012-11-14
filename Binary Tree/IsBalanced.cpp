class Solution {
public:
    int dep(TreeNode *node)
    {
        if(node==NULL)return 0;
        int L=dep(node->left);
        int R=dep(node->right);
        if(L==-1||R==-1)
        return -1;
        if(L>R+1||R>L+1)
        return -1;
        return max(L,R)+1;
    }
    bool isBalanced(TreeNode *root) {
        if(dep(root)!=-1)
        return true;
        return false;
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
    }
};