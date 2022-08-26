class Solution {
    vector<string> result;
    void treePaths(TreeNode* root,string s){
        if(root->left==NULL && root->right==NULL){
            result.push_back(s+to_string(root->val));
            return;
        }
         if(root->left)
            treePaths(root->left,s+to_string(root->val)+"->");
            
         if(root->right)
            treePaths(root->right,s+to_string(root->val)+"->");
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        treePaths(root,"");
        return result;
    }
};