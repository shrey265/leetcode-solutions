class Solution {
    vector<long> level_sum;
    double avg(){
        double avg = 0;
        int n=0;
        for(int i=0;i<level_sum.size();i++){
            avg = (double)n*avg/(n+1) + (double)level_sum[i]/(n+1);
            n++;
        }
        return avg;
    }
    int depth(TreeNode* root){
        if(root==NULL)
            return 0;

        return max(depth(root->left)+1,depth(root->right)+1);
    }
    void bfs(TreeNode* root,int n){
        if(root==NULL)
            return;
        if(n==0)
            level_sum.push_back(root->val);
        bfs(root->left,n-1);
        bfs(root->right,n-1);
    }
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        int n = depth(root);
        for(int i = 0;i<n;i++){
          bfs(root,i);
            result.push_back(avg());
            level_sum.clear();
        }
       
        return result;
    }
};