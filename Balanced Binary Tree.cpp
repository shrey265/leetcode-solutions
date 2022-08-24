class Solution {
    int maxDepth(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(maxDepth(root->left)>maxDepth(root->right)+1)
            return false;
        else if(maxDepth(root->left)<maxDepth(root->right)-1)
            return false;
        return isBalanced(root->left) & isBalanced(root->right);
    }
};