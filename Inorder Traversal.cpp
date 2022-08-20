
class Solution {
    vector<int> ans;
    void inorder(TreeNode* root) {
        if(root==NULL)
            return ;
        
         inorderTraversal(root->left);
        ans.push_back(root->val);
         inorderTraversal(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};