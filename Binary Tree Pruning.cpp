class Solution {
    void tree(TreeNode* root, TreeNode* parent){
         if(root==NULL)
             return;
        
        tree(root->left,root);
        tree(root->right, root);
         if(root->left==NULL && root->right==NULL && root->val ==0){
             if(parent->left==root)
                 parent->left=NULL;
             else if(parent->right==root)
                 parent->right=NULL;
             return;
             
         }
             
    }
public:
    TreeNode* pruneTree(TreeNode* root) {
        TreeNode* temp = new TreeNode();
        tree(root,temp);
        if(root->left==NULL && root->right==NULL && root->val==0)
            return NULL;
        return root;
    }
};