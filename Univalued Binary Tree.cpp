class Solution {
    int val;
    bool unival(TreeNode* root){
        if(root==NULL)
            return true;
        else if(root->val!=val)
            return false;
        return unival(root->right) && unival(root->left);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        val=root->val;
        return unival(root);
    }
};