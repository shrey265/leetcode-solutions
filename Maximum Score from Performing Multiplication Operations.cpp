class Solution {
    vector<vector<int>> dp;
    int maxScore(vector<int>& nums,int n, vector<int>& multi,int m, int op, int left){
    
        if(op==m)
            return 0;
        if(dp[op][left]!=INT_MIN){
            return dp[op][left];
        }
        int l = multi[op]*nums[left] + maxScore(nums,n, multi,m, op+1, left+1);
        int r = multi[op]*nums[n-1-(op-left)] + maxScore(nums,n, multi,m, op+1, left);
        dp[op][left]=max(l,r);
        return dp[op][left];
    }
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size(), m=multipliers.size();
        dp.resize(1001,vector<int>(1001,INT_MIN));
        return maxScore(nums,n, multipliers,m, 0, 0);
        
    }
};