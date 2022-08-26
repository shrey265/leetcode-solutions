class Solution {
    
    int leftLeaves(TreeNode* root,TreeNode* parent){
        if(root==NULL)
            return 0;
        else if(root->left==NULL && root->right==NULL && parent->right!=root )
            return root->val;
        return leftLeaves(root->left,root) + leftLeaves(root->right,root) ;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
            return 0;
        TreeNode* parent = new TreeNode();
        parent->left=root;
        return leftLeaves(root,parent);
    }
};