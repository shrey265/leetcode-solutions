
class Solution {
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)
            return NULL;
        else if(n==1)
            return new TreeNode(nums[0]);
        TreeNode* root = new TreeNode(nums[n/2]);
        vector<int> num1 (nums.begin(),nums.begin()+n/2);
        vector<int> num2 (nums.begin()+n/2+1,nums.end());
        root->left = sortedArrayToBST(num1);
        root->right = sortedArrayToBST(num2);
        
        return root;
    }
};