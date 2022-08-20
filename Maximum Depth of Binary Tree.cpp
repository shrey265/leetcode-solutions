
class Solution {
    int depth=0;
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
        
    }
};