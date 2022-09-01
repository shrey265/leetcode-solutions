class Solution {
    int num=0;
    void node(TreeNode* root,int max_val){
        if(root==NULL)
            return ;
        if(root->val>=max_val){
            num++;
            node(root->right,root->val);
            node(root->left,root->val);
        }
        else{
            node(root->right,max_val);
            node(root->left,max_val);
        }
            
    }
public:
    int goodNodes(TreeNode* root) {
        node(root,root->val);
        return num;
    }
};