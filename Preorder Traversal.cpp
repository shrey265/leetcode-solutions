
class Solution {
    vector<int> ans;
    void preorder(TreeNode* root){
        if(root==NULL)
            return;
        
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};