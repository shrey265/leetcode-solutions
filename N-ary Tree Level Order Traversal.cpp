class Solution {
    unordered_map<int,vector<int>> result;
    int max_level=0;
    void traverse(Node* root, int lvl){
        if(root==NULL)
            return;
        if(lvl>max_level)
            max_level=lvl;
        if(result.count(lvl)==0)
            result[lvl]={};
        for(int i=0;i<root->children.size();i++){
            result[lvl].push_back(root->children[i]->val);
            traverse(root->children[i],lvl+1);
        }
    }
    
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)
            return {};
        result[0] = {root->val};
        traverse(root,1);
        vector<vector<int>> vec;
        for(int i=0;i<max_level;i++){
            vec.push_back(result[i]);
        }
        
        return vec;
    }
};