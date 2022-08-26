class Solution {
    unordered_map<int,int> freq;
    void mode(TreeNode* root){
        if(root==NULL)
            return;
        mode(root->right);
        freq[root->val]++;
        mode(root->left);
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> result;
        mode(root);
        int max_val=0;
        for(auto i:freq)
            if(i.second > max_val)
                max_val=i.second;
        for(auto i:freq)
            if(i.second==max_val)
                result.push_back(i.first);
        return result;
    }
};