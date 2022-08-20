
class Solution {
     bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return true;
        else if (p==NULL || q==NULL)
            return false;
        if(p->val != q->val)
            return false;
        
        return (  isSameTree(p->right,q->left) && isSameTree(p->left,q->right));
    }
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        return isSameTree(l,r);
    }
};