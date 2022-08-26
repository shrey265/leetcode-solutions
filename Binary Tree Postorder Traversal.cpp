class Solution {
    vector<int> post;
    void postorder(TreeNode* root){
        if(root==NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        post.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return post;
    }
};