class Solution {
    priority_queue<tuple<int,int,int>> grid;
    
    void dfs(TreeNode* root,int x,int y){
        if(root==NULL)
            return;
        tuple val(-1*y,-1*x,-1*root->val);
        grid.push(val);
        dfs(root->right,x+1,y+1);
        dfs(root->left,x+1,y-1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        dfs(root,0,0);
        int pre=INT_MIN;
        
        while(!grid.empty()){
            int x,y,z;
            tie(y,x,z) = grid.top();
            grid.pop();
            if(y!=pre){
               result.push_back({});
                pre=y;
            }
              result.back().push_back(-1*z);  
        }
        return result;
    }
};