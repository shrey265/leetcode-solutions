class Solution {
    bool PathSum(TreeNode* root, int targetSum) {
        if(targetSum==0 && root==NULL)
            return true;
        if(root==NULL)
            return false;
        if(root->left && root->right)
        return PathSum(root->left,targetSum-root->val) || PathSum(root->right,targetSum-root->val);
        else if(root->left)
            return PathSum(root->left,targetSum-root->val);
        else
          return PathSum(root->right,targetSum-root->val);
    }
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL && targetSum==0)
            return false;
        
        return PathSum(root,targetSum);
    }
};