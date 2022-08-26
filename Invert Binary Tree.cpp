class Solution {
    void invert(TreeNode* root){
        if(root==NULL)
            return ;
        TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        invertTree(root->left);
        invertTree(root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};