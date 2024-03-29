class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root==NULL)
            return "";
        if(root->left==NULL && root->right==NULL)
            return to_string(root->val);
        else if(root->right==NULL)
            return to_string(root->val) + '(' + tree2str(root->left) + ')';
        
        return to_string(root->val)+'(' + tree2str(root->left) +')' + '(' + tree2str(root->right) + ')';
     
    }
};