

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
   
        if(p->val==root->val || q->val==root->val)
            return root;
        else if(p->val < root->val && q->val > root->val)
            return root;
        else if(p->val > root->val && q->val < root->val)
            return root;
        else if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left,p,q);
        
        return lowestCommonAncestor(root->right,p,q);
        
        
            
    }
};